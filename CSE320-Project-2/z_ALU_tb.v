`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:26:40 03/25/2014
// Design Name:   z_ALU
// Module Name:   C:/Users/Zachary/Documents/GitHub/CSE320-Project-2/CSE320-Project-2/z_ALU_tb.v
// Project Name:  CSE320-Project-2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: z_ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module z_ALU_tb;

	// Inputs
	reg [31:0] a_in;
	reg [31:0] b_in;
	reg [4:0] shamt_in;
	reg [31:0] ins_in;

	// Outputs
	wire [31:0] out;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	z_ALU uut (
		.out(out), 
		.zero(zero), 
		.a_in(a_in), 
		.b_in(b_in), 
		.shamt_in(shamt_in), 
		.ins_in(ins_in)
	);

	initial begin
		// Initialize Inputs
		a_in = 32'b00010100110101011010011010111011;
		b_in = 32'b01011101001011101000001001110100;
		shamt_in = 5'b00101;
		ins_in = 32'b00000011111000001111100000100011;

		// Wait 100 ns for global reset to finish
		//#100;
        
		// Add stimulus here

	end
      
endmodule

