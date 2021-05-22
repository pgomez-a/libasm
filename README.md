# libasm
Assembly language, often called **asm**, is a low-level language for computers or other programmable devices, where there is a strong relationship between the device's hardware and the the language. Each computer has a specific asm. In contrast, high-level languages tend to be cross-platform, although they need to be compiled or interpreted.<br>
Assembly language is also called assembly or symbolic machine language.

### Brief Introduction
By doing **libasm** we will learn to program in assembly language and, what I think is the most important part, we will learn **how the CPU works when we execute a program**. The majority of the time, we have heard that the CPU is like the "brain" of the computer, but how does it really work?
<br><br>
As I have done so far, I want to show you the things that I consider to be the most important to know before starting the project in case you want to. However, during all the projects I have done at 42, I have found that we waste a lot of time searching for unnecesary information before starting a new challenge.
<img width="382" align="right" alt="asm code" src="https://user-images.githubusercontent.com/74931024/119234299-6d809d80-bb2d-11eb-9442-e14be2643233.png">For this reason, and because most of the time it is impossible for me to find information in Spanish, I have decided to create a wesite where I will put a brief introduction to most of the concepts that I have seen during my trip. After the explanation, I will show you some links (some in Spanish and some in English) to a more detailed explanation of the concept so that you can figure out what to study when starting a project. This way you can save time when searching, being able to use this time to learn more.<br>

**I am in progress of making the website. Once it's done, I'll post the link here.**

### Objectives
With this project we will have to replicate, in assembly language, the following functions:
* ft_strlen
* ft_strcpy
* ft_strcmp
* ft_write
* ft_read
* ft_strdup

By doing this, we will enter in the world of CPUs and registers for the first time.

### Types of languages
* **Medium-level languages:** those that, based on the set of instructions available, allow the use of functions at the arithmetic level, but at a logical level they depend on the assembly literals. These languages are procedurally oriented. Procedures are made up of processes. They have different levels of abstraction.
* **Assembly languages:** they are a first level of abstraction. They cannot be executed directly by the computer. In fact, they are human-readable source code files that need a specific tool (also known as a compiler) to translate it into a language that the computer can understand so that the CPU can run the program.
* **Low-level languages:** composed of 1 and 0 that will be executed directly by the CPU. As we read this file, we will only see non-printable characters. However, these 1s and 0s actually represent instructions and data to be processed.

### What does abstraction mean?
Abstraction consists of [isolating an element from its context](https://en.wikipedia.org/wiki/Abstraction_(computer_science)) or from the rest of the elements that go with it.

### Low-level Languages
Low-level languages are those that perform direct control over the computer hardware, so they depend on the physical architecture of the machines that support them. However, the word "low" does not mean that low-level languages are less powerful than high-level ones, because the difference between them lies in the abstraction between the language and the hardware: the abstraction in a low-level language is much smaller than in high-level languages.<br>
Since low-level languages are more interrelated with the hardware infrastructure, it is easier to translate into machine language.

### Memory distribution
<img align="left" width="251" alt="stack" src="https://user-images.githubusercontent.com/74931024/119233799-e4686700-bb2a-11eb-87c9-632539262ac0.png">
Memory is simply an array of bytes, where each byte has its own address. When you run a program, the operating system gives a portion of memory to the program. That memory, known as address space, is divided into different segments.<br>

### Components of a CPU
As we have just seen, the most important part of a computer is the CPU, that is, the processor. A processor is based on the use of different logical expressions (ALU) that will allow the computer to execute instructions. **ALU** refers to **arithmetic logic unit**, a digital circuit that is used to perform arithmetic and logic operations. In fact, we can highlight two different types of processors:
* **CISC:** complex instruction set computing.
* **RISC:** reduced instruction set computing.

Depending on the type of processor used, the way in which operations are performed differs. However, there is a time when the ALU used becomes very complex, because it has to use many circuits and logic operations. To ensure that all components are in sync when "calling" each other, the **control unit** is used. <br>
Finally, to store data that is going to be use inside the processor and to can be able to do operations quickly, we have the **registers**.
 
### Registers
Modern computers don't just run on physical memory. Inside the CPU are small pieces of memory called registers. **All operations carried out directly with these registers are extremely fast as they can communicate directly with the processor**. In addition, over time, they have appeared with some improvements:
* **8 bits registers:** at the beginning registerts only had a size of 8 bits. These registers were: A, B, C, D, E, H and L.
  * **A** was used to store the result of operations
  * **B** stores the base direction of something that was wanted to keep referenced in memory.
  * **C** was used as a counter.
  * **D** stores the data of operations.
  
 All these registers were **General Registers**, but there were also different registers known as **Status Registers**, which were used to store the status of an operation, as **S and Z**. Finally, we can also find **Special Registers**, as **SP (Stack Pointer), IP (Instruction Pointer) or PC (Program Counter)**.
 
* **16 bits registers:** later, registers with 16 bits of size were added. At this point, registers were called like in the 8 bits registers but with an X (A --> AX). By this way, when we find a register called AX, we know that is has a 16 bits size, and when we find AH or AL, whe know that they are 8 bits registers. The H is used for the most significant byte, and the L is used for the less significant byte. AX(16 bits) = AH(8 bits) + AL(8 bits). Although I am not goint to show the new registers that  were added, it is important to know that if a **byte** is used to call 8 bits, we use **word** to call 16 bits.
* **32 bits registers:** also known as dwords. In this case, the AX register is called EAX, and the same happens for the rest of the registers.
* **64 bits registers:** also known as qwords. In this case, the EAC register is called RAX, and the same for the rest of the registers.

### How does the CPU work?
For simplicity, we are going to see two stages:
* **Search phase:**
  * Search of the instruction in memory
* **Execution phase:**
  * Decoding of the instruction
  * Execution of the instruction
  * Storage of results

We will start at the **program counter (PC)**. PC is a register that contains the memory address of the instruction to be executed. This address will be searched in memory, although first it is necessary to specify if you want to read or write to that address. For this, there is a register called **MAR (Memory Address Register)**, which is the one that sends the address to the memory and the one that says if it is a read or write instruction. At this point, the memory recalls the stored value and this value will be temporarily stored in **MDR (Memory Data Address)**. This register collects both the instruction to be executed and the data to be processed, being sent to the **IR (Instruction Register)**. However, if the address does not contain an instruction, meaning it only contains data, the MDR will send that stored value to the ALU. Once the instruction is in IR, the search phase ends.<br>
Once in the execution phase, the first step is to decode the instruction to analyze the different micro-operations to be performed. Depending on the operation, different electronic components are needed. Inside the control unit there is a **control block** that does this (identifies the operation to be performed). After this, the code is sent to the ALU, which also receives the necessary data to work with the opcode. When the operation is performed, the result can be stored in memory or in a register. And now, the execution phase is over, you have to start again in the search phase.<br>
<br>
This entire cycle is known as the **Fetch Cycle**, and it defines how a CPU executes the instructions it receives.

### Before ending...
... There are many more concepts that you can learn with this project. Try looking up **what is a Harvard architecture, what is a driver, what is a BIOS, what is a system call, or why to call the variable errno**. You will enter an amazing world to explore, but where you will also get very frustrated while looking for more practical knowledge in case you want to learn to program in assembler. Good luck! :)

<img width="1064" alt="CPU" src="https://user-images.githubusercontent.com/74931024/119235579-75dbd700-bb33-11eb-811f-25671ffd412b.png">
