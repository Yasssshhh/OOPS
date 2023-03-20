// Pure Virtual functions and Abstract Class


//A pure virtual function is a virtual function in C++ for which we need not to write any function definition and only we have to declare it. 
//It is declared by assigning 0 in the declaration.

// An abstract class is a class in C++ which have at least one pure virtual function.
// Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation.
// Such a class is called abstract class.

// Abstract class can have normal functions and variables along with a pure virtual function.
// If an Abstract Class has derived class, they must implement all pure virtual functions, or else they will become Abstract too.
// We can’t create object of abstract class.


// #include<iostream>
// using namespace std;

// class Vehicle{
//     public:
//     string color;
//     virtual void print()=0;
// };

// class Car:public Vehicle{
//     public:
  
//     int numGears;
// };

// int main(){
// // Vehicle v; not possible as vehicle is an abstract class.
// // Car c; not possible because it is inheriting Vehicle class.(If we do not override the pure virtual function in derived class, then derived class also becomes abstract class. )
// }

