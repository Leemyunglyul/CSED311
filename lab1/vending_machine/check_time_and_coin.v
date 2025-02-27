`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,clk,reset_n,o_output_item,wait_time,o_return_coin);
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [`kNumItems-1:0] o_output_item;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	// initiate values
	initial begin
		// TODO: initiate values
		o_return_coin = 0;
		wait_time = 0;
	end


	// update coin return time
	always @(i_input_coin) begin
		// TODO: update coin return time
		

	end

	always @(*) begin
		// TODO: o_return_coin

	end

	always @(posedge clk) begin
		if (!reset_n) begin
		// TODO: reset all states.
			wait_time = 0;
			o_return_coin = 0;
		end
		else begin
		// TODO: update all states.
			if(wait_time > 1) 
				wait_time = wait_time - 1;
			else
				wait_time = 0;
		end

		if(i_input_coin) begin
			wait_time = `kWaitTime;
			o_return_coin = i_input_coin;
		end

		if(o_output_item) begin
			wait_time = `kWaitTime;
		end
	end
endmodule 