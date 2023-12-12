# Team Project - RISC-V RV32I Processor
---
# Personal Statement & Contributions

**Johnny Xiao Hong Yu**

---

## ALU Instructions
In order to execute the various ALU instructions required for f1.s and pdf.s programs, additional ALU functionalities were needed on top of the ```ADDI``` instruction in Lab4. I updated ```alu.sv``` to support ```SLLI```, ```XOR```, ```SRLI``` and ```ANDI``` instructions. The ALU chooses which operation to run based on the value of ```aluctrl``` signal using a ```case``` statement as so:

| aluctrl | Instruction Run |
| ------- | --------------- |
| 000     | ADD & ADDI      |
| 001     | SLLI            |
| 100     | XOR             |
| 101     | SRLI            |
| 111     | ANDI            |

This values were assigned as such to match the convention of 3-bit ```func3``` in R-type instructions of the conventional RISC-V instruction set. Implementation of the logic was straightforward in SystemVerilog as in-built logical operators could be used (```^```, ```>>``` etc) and there was no need to create additional arithmetic modules.

