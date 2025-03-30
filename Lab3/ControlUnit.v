module ControlUnit(
    input reset,
    input clk,
    input [6:0] opcode,
    output reg pc_write_cond,
    output reg pc_write,
    output reg IorD,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg ir_write,
    output reg pc_src,
    output reg alu_op,
    output reg [1:0] alu_srcB,
    output reg alu_srcA,
    output reg reg_write
);

    wire [3:0] current_state, next_state;
    reg [1:0] addrctrl;

    address_select_logic address_logic(
        .opcode(opcode),
        .addrctrl(addrctrl),
        .current_state(current_state),
        .next_state(next_state)
    );

    change_state changeState(
        .clk(clk),
        .reset(reset),
        .next_state(next_state),
        .current_state(current_state)
    );

    always @(*) begin
        pc_write_cond = 0;
        pc_write      = 0;
        IorD          = 0;
        mem_read      = 0;
        mem_write     = 0;
        mem_to_reg    = 0;
        ir_write      = 0;
        pc_src        = 0;
        alu_op        = 0;
        alu_srcB      = 2'b00;
        alu_srcA      = 0;
        reg_write     = 0;
        addrctrl      = 2'b00;
        case(current_state)
            // IF: IR<-MEM[PC]
            0: begin
                IorD = 0;
                mem_read = 1;
                ir_write = 1;
                addrctrl = 3;
            end
            // ID: A<-RF[rs1[IR]], B<-RF[rs2[IR]], ALUOut<-PC+4 
            1: begin
                alu_srcA = 0;
                alu_srcB = 1;
                alu_op = 1;
                addrctrl = 1;
            end
            // R-type EX: ALUOut<-A+B
            2: begin
                alu_srcA = 1;
                alu_srcB = 0;
                alu_op = 0;
                addrctrl = 2;
            end
            // R,I-type WB: RF[rd(IR)]<-ALUOut, PC<-PC+4
            3: begin
                mem_to_reg = 0;
                reg_write = 1;
                alu_srcA = 0;
                alu_srcB = 1;
                alu_op = 1;
                pc_write = 1;
                addrctrl = 0;
            end
            // I-type EX: ALUOut<-A+imm(IR)
            4: begin
                alu_srcA = 1;
                alu_srcB = 2;
                alu_op = 0;
                addrctrl = 2;
            end
            // Load, Store EX: ALUOut<-A+imm(IR)
            5: begin
                alu_srcA = 1;
                alu_srcB = 2;
                alu_op = 1;
                addrctrl = 2;
            end
            // Load MEM: MDR<-MEM[ALUOut]
            6: begin
                ir_write = 0;
                IorD = 1;
                mem_read = 1;
                addrctrl = 3;
            end
            // LOAD WB: RF[rd(IR)]<-MDR, PC<-PC+4
            7: begin
                mem_to_reg = 1;
                reg_write = 1;
                alu_srcA = 0;
                alu_srcB = 1;
                alu_op = 1;
                pc_write = 1;
                addrctrl = 0;
            end
            // Store MEM: MEM[ALUOut]<-B, PC<-PC+4
            8: begin
                IorD = 1;
                mem_write = 1;
                alu_srcA = 0;
                alu_srcB = 1;
                alu_op = 1;
                pc_src = 0;
                pc_write = 1;
                addrctrl = 0;
            end
            // Bxx EX: cond?(A,B)
            9: begin
                alu_op = 0;
                alu_srcA = 1;
                alu_srcB = 0;
                addrctrl = 2;
            end
            // Bxx cond: if(!cond) PC<-PC+4, PC<-PC+imm(IR)
            10: begin
                alu_op = 1;
                pc_write = 1;
                pc_write_cond = 1;
                pc_src = 0;
            end
            // JAL EX: RF[rd(IR)]<-ALUOut, PC<-PC+imm(IR)
            11: begin
                mem_to_reg = 0;
                reg_write = 1;
                alu_srcA = 0;
                alu_srcB = 2;
                alu_op = 1;
                pc_write = 1;
                pc_src = 0;
                addrctrl = 0;
            end
            // JALR EX: RF[rd(IR)]<-ALUOut, PC<-A+imm(IR)
            12: begin
                mem_to_reg = 0;
                reg_write = 1;
                alu_srcA = 1;
                alu_srcB = 2;
                alu_op = 1;
                pc_write = 1;
                pc_src = 0;
                addrctrl = 0;
            end
            default: ;
        endcase

    end



endmodule
