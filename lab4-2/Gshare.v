module Gshare #(
    parameter GHR_BITS = 10,           // BHSR 비트 수
    parameter PC_TAG_BITS = 25,     // PC 태그 비트 수 (32-5-2=25)
    parameter PC_INDEX_BITS = 5,      // BTB 인덱스 비트 수 (32엔트리 = 2^5)
    parameter PHT_SIZE = 1024          // PHT 크기 (2^7)
)(
    input clk,
    input reset,
    input [31:0] pc,            // 현재 PC
    input update_valid,         // 업데이트 여부
    input [31:0] update_pc,      // 업데이트할 PC
    input [31:0] update_target,  // 실제 분기 목적지
    input update_taken,          // 실제 분기 결과

    output wire [31:0] next_pc,      // 예측된 다음 PC
    output wire predict_taken
);

    // Branch History Shift Register (BHSR 또는 GHR)
    reg [GHR_BITS-1:0] bhsr;         // 글로벌 분기 히스토리
    
    // 2비트 패턴 히스토리 테이블 (PHT)
    reg [1:0] pht [0:PHT_SIZE-1];
    
    // BTB - 32엔트리 
    reg [31:0] btb [0:31];            // 점프 목적지 저장
    
    // 태그 테이블 - 32엔트리
    reg [PC_TAG_BITS-1:0] tag_table [0:31];

    // PC 인덱싱 및 태그 추출
    wire [PC_INDEX_BITS-1:0] pc_idx = pc[PC_INDEX_BITS+1:2];      // PC 인덱스 (워드 정렬)
    wire [PC_TAG_BITS-1:0] pc_tag = pc[31:PC_INDEX_BITS+2];       // PC 태그
    
    // 업데이트 주소 인덱싱 및 태그 추출
    wire [PC_INDEX_BITS-1:0] update_idx = update_pc[PC_INDEX_BITS+1:2];
    wire [PC_TAG_BITS-1:0] update_tag = update_pc[31:PC_INDEX_BITS+2];
    
    // PHT 인덱스 계산 (PC와 BHSR XOR)
    wire [GHR_BITS-1:0] pht_idx = pc[GHR_BITS+1:2] ^ bhsr;
    wire [GHR_BITS-1:0] update_pht_idx = update_pc[GHR_BITS+1:2] ^ bhsr;
    
    // 태그 비교
    wire tag_match = (pc_tag == tag_table[pc_idx]);
    
    // 분기 예측 (PHT에서 taken 여부 결정)
    wire pht_taken = (pht[pht_idx] >= 2'b10);  // 2비트 카운터 상위 비트 확인
    
    // 최종 예측 및 next_pc 결정 (그림의 AND 게이트와 MUX)
    assign predict_taken = pht_taken && tag_match;
    assign next_pc = predict_taken ? btb[pc_idx] : (pc + 4);
    
    // 업데이트 로직
    integer i;
    always @(posedge clk) begin
        if (reset) begin
            bhsr <= 0;
            for (i = 0; i < PHT_SIZE; i = i + 1)
                pht[i] <= 2'b01;  // 약한 not taken으로 초기화
            for (i = 0; i < 32; i = i + 1) begin
                btb[i] <= 0;
                tag_table[i] <= 0;
            end
        end
        else if (update_valid) begin
            // PHT 업데이트 (2비트 포화 카운터)
            if (update_taken) begin
                if (pht[update_pht_idx] < 2'b11)
                    pht[update_pht_idx] <= pht[update_pht_idx] + 1;
            end else begin
                if (pht[update_pht_idx] > 2'b00)
                    pht[update_pht_idx] <= pht[update_pht_idx] - 1;
            end
            
            // BTB 및 태그 테이블 업데이트 (실제 분기가 발생한 경우만)
            if (update_taken) begin
                btb[update_idx] <= update_target;
                tag_table[update_idx] <= update_tag;
            end
            
            // BHSR 업데이트 (이전 결과를 저장하는 쉬프트 레지스터)
            bhsr <= {bhsr[GHR_BITS-2:0], update_taken};
        end
    end
endmodule
