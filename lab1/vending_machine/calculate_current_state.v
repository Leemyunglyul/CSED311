
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,input_total, output_total,
current_total_nxt,o_return_coin,o_available_item,o_output_item);


	
	input [`kNumCoins-1:0] i_input_coin,o_return_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0] current_total_nxt, input_total, output_total;
	integer i;	


	reg [`kTotalBits-1:0] current_input, current_output;
	
	// Combinational logic for the next states
	always @(*) begin
		// TODO: current_total_nxt
		// You don't have to worry about concurrent activations in each input vector (or array).
		// Calculate the next current_total state.
		
		current_input = 0;

		for(i = 0; i < `kNumCoins; i = i + 1) begin
			current_input = current_input + i_input_coin[i] * coin_value[i];

		end

		if(current_input > 0) begin
			current_total_nxt = current_total + current_input;
			input_total = input_total + current_input;
		end else begin
			current_total_nxt = current_total;
			input_total = input_total;
		end
		
	end

	
	
	// Combinational logic for the outputs
	always @(*) begin
		// TODO: o_available_item
		// TODO: o_output_item

		o_available_item = 0;
		o_output_item = 0;
		current_output = 0;

		for(i = 0; i < `kNumItems; i = i + 1) begin

			o_available_item[i] = item_price[i] <= current_total ? 1 : 0;

			if(i_select_item[i] && o_available_item[i]) begin
				o_output_item[i] = 1;
				current_output = current_output + item_price[i];
			end
			else begin
				o_output_item[i] = 0;
			end
		end 

		if(o_output_item > 0) begin
			output_total = output_total + current_output;
			current_total_nxt = current_total >= current_output ? current_total - current_output : 0;
		end else begin
			output_total = output_total;
			current_total_nxt = current_total;
		end
		
	end

endmodule