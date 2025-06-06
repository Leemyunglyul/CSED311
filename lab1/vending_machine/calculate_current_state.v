
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
input_total, output_total, current_total_nxt,o_available_item,o_output_item);

	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0] input_total, output_total,current_total_nxt;
	
	integer i;

	always @(*) begin
		
		input_total = 0;
		
		for(i=0; i < `kNumCoins; i = i + 1)
			input_total = input_total + i_input_coin[i] * coin_value[i];

	end

	always @(*) begin
		o_available_item = 0;

		for(i = 0; i < `kNumItems; i = i + 1) 
			o_available_item[i] = item_price[i] <= current_total ? 1 : 0;
	end

	always @(i_select_item, o_available_item) begin

		output_total = 0;
		o_output_item = 0;
		

		for(i = 0; i < `kNumItems; i = i + 1) begin

			if(i_select_item[i] & o_available_item[i]) begin
				o_output_item[i] = 1;
			end	else begin
				o_output_item[i] = 0;
			end

			output_total = output_total + item_price[i] * o_output_item[i];

		end

	end

	always @(*)
		current_total_nxt = current_total + input_total - output_total;

endmodule 