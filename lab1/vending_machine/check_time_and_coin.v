`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,clk,reset_n,o_output_item,i_trigger_return,
current_total,coin_value,current_total_nxt,wait_time,o_return_coin);
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [`kNumItems-1:0] o_output_item;
	input i_trigger_return;
	input [`kTotalBits-1:0] current_total;
	input [31:0] coin_value [`kNumCoins-1:0];
	output reg [`kTotalBits-1:0] current_total_nxt;
	output reg [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	integer i;
	reg [`kTotalBits-1:0] left_coin;

	// initiate values
	initial begin
		// TODO: initiate values
		o_return_coin = 0;
		wait_time = 0;
	end

	/*
	// update coin return time
	always @(i_input_coin) begin
		// TODO: update coin return time
		o_return_coin = i_input_coin;

	end

	always @(*) begin
		// TODO: o_return_coin
		
	end*/

	always @(i_trigger_return) begin

		/*if(i_trigger_return) begin

			for(i = 2, left_coin = 0; i >= 0; i--) begin
				
				if(current_total - left_coin >= coin_value[i]) begin
					
					o_return_coin[i] = 1;
					left_coin += (current_total - left_coin) / coin_value[i] * coin_value[i];
				
				end else begin

					o_return_coin[i] = 0;
				
				end

			end
		
			return_total = current_total;
			current_total = 0;
			input_total = 0;
			output_total = 0;
			
		end*/

	end

	always @(posedge clk) begin
		if (!reset_n) begin
		// TODO: reset all states.
			wait_time = 0;
			o_return_coin = 0;
		end
		else begin
		// TODO: update all states.
			if(wait_time > 0) 
				wait_time = wait_time - 1;
			else begin
				/*for(i = 2, left_coin = 0; i >= 0; i--) begin
				
					if(current_total - left_coin >= coin_value[i]) begin
						
						o_return_coin[i] = 1;
						left_coin += (current_total - left_coin) / coin_value[i] * coin_value[i];
					
					end else begin

						o_return_coin[i] = 0;
					
					end

				end
		
				return_total_nxt = current_total;
				current_total_nxt = 0;
				input_total_nxt = 0;
				output_total_nxt = 0;*/
			end
		end

		if(i_input_coin || o_output_item) begin
			wait_time = `kWaitTime;
		end
	end
	
endmodule 