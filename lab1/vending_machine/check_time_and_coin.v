`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,clk,reset_n,o_output_item,i_trigger_return
,coin_value,wait_time,o_return_coin,return_total,current_total);
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [`kNumItems-1:0] o_output_item;
	input i_trigger_return;
	input [31:0] coin_value [`kNumCoins-1:0];
	input [`kTotalBits-1:0] current_total;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [`kTotalBits-1:0] return_total;
	output reg [31:0] wait_time;

	reg [`kTotalBits-1:0] left_coin;
	integer i;

	// initiate values
	initial begin
		// TODO: initiate values
		o_return_coin = 0;
		wait_time = 0;
	end

	always @(*) begin
		// TODO: o_return_coin
		o_return_coin = 0;
		return_total = 0;
		left_coin = 0;

		if(wait_time == 0 || i_trigger_return) begin

			return_total = current_total;
			
			for(i = 2; i >= 0; i--) begin
				
				if(current_total - left_coin >= coin_value[i]) begin
					
					o_return_coin[i] = 1;
					left_coin += (current_total - left_coin) / coin_value[i] * coin_value[i];

				end else
					o_return_coin[i] = 0;

			end
			
		end else begin
			o_return_coin = 0;
			return_total = 0;
		end
		

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

		if(i_input_coin || o_output_item) begin
			wait_time = `kWaitTime;
		end

	end

endmodule 