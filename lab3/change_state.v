module change_state(input [6:0] opcode,
                   output reg [3:0] state);

always @(posedge clk) begin

    case(state)

        // IF1
        4'b0000: begin
            state <= 4'b0001;
        end

        // IF2
        4'b0001: begin
            state <= 4'b0010;
        end

        // IF3 
        4'b0010: begin
            state <= 4'b0011;
        end

        // IF4 
        4'b0011: begin
            if(opcode == JAL)
                state <= 4'b0101;   // EX1
            else 
                state <= 4'b0100;
        end

        // ID
        4'b0100: begin
            state <= 4'b101;
        end

        // EX1
        4'b0101: begin
            state <= 4'b0110;
        end

        // EX2
        4'b0110: begin
            if(opcode == LOAD || opcode == STORE) 
                state <= 4'b0111; // MEM1
            else if(opcode == BRANCH)
                state <= 4'b0000; // IF1
            else // R,I-type, JALR, JAL
                state <= 4'b1011; // WB
        end

        // MEM1
        4'b0111: begin
            state <= 4'b1000;
        end

        // MEM2
        4'b1000: begin
            state <= 4'b1001;
        end

        // MEM3
        4'b1001: begin
            state <= 4'b1010;
        end

        // MEM4
        4'b1010: begin
            if(opcode == LOAD) // LD
                state <= 4'b1011; // WB
            else // SD
                state <= 4'b0000; // IF1
        end

        // WB
        4'b1011: begin
            state <= 4'b0000;
        end

    endcase

end

endmodule 

