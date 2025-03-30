module state_counter(input clk,
                   input reset,
                   input [6:0] opcode,
                   output reg [3:0] state);

always @(posedge clk) begin
    if(reset) state <= 0;
    else begin
        case(state)    
            0: state <= 1;
            1: begin
                case(opcode)
                    `ARITHMETIC: state <= 2;
                    `ARITHMETIC_IMM: state <= 4;
                    `LOAD, `STORE: state <= 5;
                    `BRANCH: state <= 9;
                    `JAL: state <= 11;
                    `JALR: state <= 12;
                    default: state <= 0;
                endcase
            end
            2, 4: state <= 3;
            5: begin
                case(opcode)
                    `LOAD: state <= 6;
                    `STORE: state <= 8;
                    default: state <= 0;
                endcase
            end
            6: state <= 7;
            9: state <= 10;
            3, 7, 8, 11, 12: state <= 0;
            default: begin
                state <= 0;
            end
        endcase
    end
    
    
end

endmodule 

