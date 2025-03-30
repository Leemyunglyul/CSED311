module Mux(
    input [3:0] in1,
    input [3:0] in2,
    input [3:0] in3,
    input [1:0] addrctrl,
    output reg [3:0] state
);

    always @(*) begin
        case(addrctrl)
            1 : state = in1;
            2 : state = in2;
            3 : state = in3;
            default : state = 0;  
        endcase
    end

endmodule 
