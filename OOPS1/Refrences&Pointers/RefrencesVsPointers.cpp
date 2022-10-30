References vs Pointers:

Both references and pointers can be used to change the local variables of one function inside another
function. Both of them can also be used to save copying of big objects when passed as arguments to 
functions or returned from functions, to get efficiency gain.

A pointer can be declared as void but a reference can never be void For example

int a = 10;
void* aa = &a; // it is valid
void& ar = a;  // it is not valid


Points to remember:
1: The pointer variable has n-levels/multiple levels of indirection i.e. single-pointer, double-pointer,
triple-pointer. Whereas, the reference variable has only one/single level of indirection.
The following code reveals the mentioned points: 

2: Reference variable cannot be updated.

3: Reference variable is an internal pointer.

4: Declaration of a Reference variable is preceded with the ‘&’ symbol ( but do not read it as “address of”).

References are less powerful than pointers:
1) Once a reference is created, it cannot be later made to reference another object; it cannot be reset. 
This is often done with pointers. 

2) References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to 
any valid thing. 

3) A reference must be initialized when declared. There is no such restriction with pointers.
Due to the above limitations, references in C++ cannot be used for implementing data structures like 
Linked List, Tree, etc. In Java, references don’t have the above restrictions and can be used to 
implement all data structures. 

References being more powerful in Java is the main reason Java doesn’t need pointers.

Advantages of Refrences:
1) Safer: Since references must be initialized, wild references like wild pointers are unlikely to exist.
2) Easier to use: References don’t need a dereferencing operator to access the value. 
They can be used like normal variables. 