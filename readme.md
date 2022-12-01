# This is the repo for IAC coursework Team4

---
#### Things to do:

- [x] Design a basic cpu structure (Lab4)

- [ ] Implement Lab3 in our cpu 

- [ ] Design cpu to implement R-Type instruction
- [ ] Design cpu to implement I-Type instruction
- [ ] Design cpu to implement S-Type instruction
- [ ] Design cpu to implement B-Type instruction
- [ ] Design cpu to implement U-Type instruction
- [ ] Design cpu to implement J-Type instruction
- [ ] Pipelined 
- [ ] Design cache for cpu
- [ ] Design bus for cpu

---

#### Contents:

[Background](https://github.com/Shiyizhuanshi/My_Lab4#background)

[Main goals](https://github.com/Shiyizhuanshi/My_Lab4#main-goals)

[Control Unit](https://github.com/Shiyizhuanshi/My_Lab4#control-unit)

[ALU](https://github.com/Shiyizhuanshi/My_Lab4#alu)

[SignExtension](https://github.com/Shiyizhuanshi/My_Lab4#signextension)

[RegisterFile](https://github.com/Shiyizhuanshi/My_Lab4#registerfile)


##### Background 

RISC-V has six types of instruction in total, they look like below:

<img width="980" alt="image" src="https://user-images.githubusercontent.com/100481494/202711466-7f65dcc5-bfb9-4e0a-81c8-e62fcbe05be8.png">


opcode
: Define the type of instruction

funct3 & funct7
: These two fields combined with opcode to determine what operation should be implemented 

rs1 & rs2
: Adress of register

rd
: Address of destination register

imm
: Constant value in instructions

---

#### Main goals

Here below are the instructions we need to implement for our cpu:

##### R-Type

![image](https://user-images.githubusercontent.com/100481494/204165782-1fe59283-6ea0-4af5-be5f-f4643ab7e744.png)

##### I & S-Tpye

![image](https://user-images.githubusercontent.com/100481494/204165825-e5da5872-dd44-4041-ba5e-5756faae755b.png)

##### B-Type

![image](https://user-images.githubusercontent.com/100481494/204165857-76714043-c690-40ba-be09-c8b0dbae533a.png)

##### U & I-Type
![image](https://user-images.githubusercontent.com/100481494/204165885-30856d47-987e-4807-84f0-b951cbd67e1b.png)

---


#### Control Unit

Control unit generates control signal to all other blocks, so in order to implement all the instructions, the first step should be fully understanding and specifying what control signal should be genrated under different operations.

###### Control signal 

| Name | PCSrc | ResultSrc | ImmSrc | ALUSrc | ALUctrl | MemWrite | RegWrite | DataCtrl |
|-----:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Length | 1 | 1 | 3 | 1 | 4 | 1 | 1 | 2 |

**ImmSrc**
: We have six types of instructions, so ImmSrc should be 3-bit, including up to 8 types.

**ALUctrl**
: For R-Type instruciton, we have ten kinds of ALU operations, thus ALUControl should be 4-bit.

**DataCtrl**
: DataCtrl should be 2-bit as there are three kinds of operations in datamemory: byte, half, word.

While designing the cpu, we should strictly name all the variales as same as in this file.

---


#### ALU

This is almost the most complicated module in our cpu.
It not only needs to do ten kinds of arithmetric operations but also needs to generates 3 inputs to the [Control Unit](https://github.com/Shiyizhuanshi/My_Lab4#control-unit) 


##### ALU operations 


##### ALU output signal 

| Signal Name | EQ | Less | Sign |
|-----:|:---:|:---:|:---:|
| Purpose | beq & bne | blt & bge | bltu & bgeu |
| Meaning | true for equal | true for less | true for unsign |



#### SignExtension

This unit takes certain fields from instructions as ImmOp and sign extend it. 
As we have in total six types of instructions, thus ImmSrc has to be 3-bit.

| ImmSrc | 000 | 001 | 010 | 011 | 100 | 101 |
|-----:|:---:|:---:|:---:|:---:|:---:|:---:|
| Type | I | S | B | R | U | J |

There should be two more situaions which are unsigned extension and zero extension.



#### RegisterFile










