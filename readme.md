# This is the repo for IAC coursework Team4

---
#### Things to do:

- [x] Design a basic cpu structure (Lab4)
- [ ] Design cpu to implement R-Type instruction
- [ ] Design cpu to implement I-Type instruction
- [ ] Design cpu to implement S-Type instruction
- [ ] Design cpu to implement B-Type instruction
- [ ] Design cpu to implement U-Type instruction
- [ ] Design cpu to implement J-Type instruction
- [ ] Design cache for cpu
- [ ] Design bus for cpu

---

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

![image](https://user-images.githubusercontent.com/100481494/204151552-ba9afd53-3290-406c-8eb3-53838dd7fded.png)

![image](https://user-images.githubusercontent.com/100481494/204151576-7a491f7a-15b3-4643-bd93-9ce5f26ca807.png)

![image](https://user-images.githubusercontent.com/100481494/204151582-6e0c5199-ebec-4b87-8e10-4d74f9712004.png)

![image](https://user-images.githubusercontent.com/100481494/204151590-c6d6057b-8492-4645-b08e-7ec69c5a3d50.png)

---


#### Control Unit

Control unit generates control signal to all other blocks, so in order to implement all the instructions, the first step should be fully understanding and specifying what control signal should be genrated under different operations.

##### Control signal 

| Name | PCSrc | ResultSrc | ImmSrc | ALUSrc | ALUctrl | MemWrite | RegWrite | DataCtrl |
|-----:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Length | 1 | 1 | 3 | 1 | 4 | 1 | 1 | 2 |






