# Simple RISC Assembler

This project implements a simple assembler for a custom RISC architecture using C++.  
The assembler reads assembly instructions from a file and converts them into corresponding machine code.

## Features
- Parses assembly instructions from an input file
- Converts instructions into machine code
- Supports arithmetic, logical, and control instructions
- Demonstrates instruction decoding and opcode mapping

## Technologies Used
- C++
- Standard Template Library (STL)

## Project Structure
assembler.cpp – Main implementation of the assembler  
assembler1.cpp – Helper functions for instruction parsing and processing  
1.cpp – Additional testing or implementation file  
input.asm – Sample assembly input file

## How to Run

1. Compile the program
g++ assembler.cpp -o assembler

3. Provide the assembly file (`input.asm`) as input.

## Example Input (input.asm)
ADD R1, R2, R3
SUB R4, R1, R2
LOAD R5, 100
STORE R5, 200

## Learning Outcomes
- Understanding of assembler design
- Instruction parsing and opcode mapping
- File handling in C++

## Author
Sonali Kumari  
B.Tech – Electronics and Communication Engineering  
Indian Institute of Technology Patna
