# Course Topics from Accel CS Fundamentals Certification
Feinman Method
1. Write out course topics, theory, etc from memory.  As if you were teaching it.  
2. Fill in gaps in knowledge that appear.    
3. Repeat. 

## Object Oriented Programming in C++
**Standard Library**
- Contains a lot of useful commonly used functions. 
- std::xxxxx
    - e.g. `std::cout <<` or `std::vector<>`

**Pointers**
- Critical in C++ and in memory management
- Pointers are variables that hold a memory address of another variable
- declared with a *
    - `int *intPtr;`
- The `&` symbol is used to get the memory address of a variable so you can link a pointer to it
```
int num = 13;
int *intPtr;
intPtr = &num;
```
- can access the value within the variable the pointer is pointing to with *
    - `intPtr = `

**Memory Management**
- Stack Memory
    - the default memory usage for computer programs
    - starts at highest memory address and grows down
    - limited by scope - is cleared from memory after scope terminates like in a function
    - to have something persist in memory outside of scope, need to use the Heap instead
- Heap Memory
    - Persistent memory type that can exist outside of scope
    - starts at a low memory address and grows up
    - Created by using pointers and with the `new` keyword
        - `int *num = new int(10);`
    - MUST be manually deleted with the `delete` keyword when it is no longer in use or will create memory leak
        - `delete num;`

**Pass by value vs pass by reference**
- Another critical thing to know in C++ memory mgmt when passing values into / out of functions
- Passing variables by value
    - Creates a copy of the variable and passes it along
    - Usually the default way that functions work
    - Can be wasteful to duplicate memory, and changes will not affect the original variable if that is needed in the situation
    - Fine for most cases when the variable doesn't take up much memory and/or you don't need to modify the original
- Passing by reference
    - passes the original variable into/out of the function
    - Saves memory and allows you to modify original
    - Can be harmful if you want to keep original intact

**Constructors and Destructors**
- [Add notes here]

**Templates**
- [Add notes here]

**Inheritance**
- [Add notes here]


## Ordered Data Structures
**Arrays**
- [Add notes here]

**Linked Lists**
- [Add notes here]

**Big O and run-time analysis**
- [Add notes here]

**Vector**
- [Add notes here]

**Queue**
- [Add notes here]

**Stack**
- [Add notes here]

**Binary Trees**
- [Add notes here]

**Tree Traversals**
- [Add notes here]

**Binary Search Trees**
- [Add notes here]

**Balanced Binary Search Trees**
- [Add notes here]

**AVL Trees**
- [Add notes here]

**B-Trees**
- [Add notes here]

**Generic Trees**
- [Add notes here]

**Tree Traversals**
- [Add notes here]

**Heap Data Structure**  
- [Add notes here]



## UnOrdered Data Structures
**Hashing**
- [Add notes here]

**map and unordered_map**
- [Add notes here]

**Disjoint Sets**  
- [Add notes here]

**Graph Data Structures**  
- [Add notes here]

**Graph Traversals**
- [Add notes here]

**Minimum Spanning Trees**
- [Add notes here]

**Kruskal's Algorithm**
- [Add notes here]

**Prim's Algorithm**
- [Add notes here]

**Dijkstra's Algorithm**
- [Add notes here]

**Landmark Path Problem**
- [Add notes here]
