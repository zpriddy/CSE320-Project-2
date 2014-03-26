`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:00 03/25/2014 
// Design Name: 
// Module Name:    z_ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module z_ALU(out, zero, a_in, b_in, shamt_in, ins_in);
	
	input [31:0] a_in, b_in, ins_in;
	input [4:0] shamt_in;
	
	output zero;
	output [31:0] out;
	
	reg [5:0] opcode, funct;
	reg [4:0] rs, rt, rd, shamt, ins_shmat;
	reg [31:0] out_reg, a, b, inst;
	reg [15:0] imm;
	
	
  
	always @(*) begin
		inst = ins_in; 
		a = a_in;
		b = b_in;
		shamt = shamt_in;
		opcode = inst[31:26];
		rs = inst[25:21];
		rt = inst[20:16];
		
		casex(opcode) //Select the regestiers to be filled
			6'b000000:begin
				rd = inst[15:11];
				ins_shmat = inst[10:6];
				funct = inst[5:0];
				end
			6'b??????:begin
				imm = inst[15:0];
				end
		endcase
		
		casex(opcode)
			6'b000000:begin
				casex(funct)
					6'b100001:begin
						out_reg = a + b;
					end 
					6'b100011:begin
						out_reg = a - b;
					end
					6'b101111:begin
						out_reg = ~(a|b);
					end
					6'b000000:begin
						out_reg = (a << shamt);
					end 
					6'b000010:begin
						out_reg = (a >> shamt);
					end
				endcase
			end
			6'b001001:begin
				//addiu
				b = a + imm;
			end
			6'b001100:begin
				//andi
				b = (a & imm);
			end
			6'b000100:begin
				//beq
				// WHERE DO WE GET PC FROM/TO?
					
			end
			6'b000101:begin
				//bne
				// WHERE DO WE GET PC FROM/TO?
			end
			6'b100011:begin
				//lw
				// What do we do with Mem locations?
			end
			6'b101011:begin
				//sw
				// What do we do with Mem locations?
				
			end
		endcase
		
		
	end
	
	assign out = out_reg;


endmodule
