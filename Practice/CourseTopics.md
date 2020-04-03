# Course Topics from Accel CS Fundamentals Certification
Feinman Method
1. Write out course topics, theory, etc from memory.  As if you were teaching it.  
2. Fill in gaps in knowledge that appear.    
3. Repeat. 

## Object Oriented Programming in C++
**Standard Library**
Contains a lot of useful commonly used functions
std::xxxxx
e.g. `std::cout <<` or `std::vector<>`

**Pointers**


**Memory Management**
Stack Memory
- the default memory usage for computer programs
- starts at highest memory address and grows down
- limited by scope - is cleared from memory after scope terminates like in a function
- to have something persist in memory outside of scope, need to use the Heap instead
Heap Memory
- Persistent memory type that can exist outside of scope
- starts at a low memory address and grows up
- Created by using pointers and with the `new` keyword
    - `int *num = new int(10);`
- MUST be manually deleted with the `delete` keyword when it is no longer in use or will create memory leak
    - `delete num;`

**

## Ordered Data Structures


## UnOrdered Data Structures
