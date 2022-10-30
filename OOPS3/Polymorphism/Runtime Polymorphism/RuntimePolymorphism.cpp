// // Runtime Polymorphism
// //Compiler resolves the object at runtime and then it will decide which function call should be associated with that object.

// //Function Overridding.
// // If derived class defines same function as defined in its base class, it is known as function overriding.
// // It is used to achieve runtime polymorphism.That base function is said to be overridden.
// // It enables you to provide specific implementation of the function which is already provided by its base class.

// //Example 1

// #include <bits/stdc++.h>
// using namespace std;

// class Parent{
// public:
// void print(){
//     cout<<"Parent";
// }
// };

// class Child:public Parent{
// public:
// void print(){
//     cout<<"Child";
// }
// };

// int main(){

// Child C1;
// C1.print();
// return 0;
// }

// Output
// Child

// // Example 2

// #include <bits/stdc++.h>
// using namespace std;

// class Vehicle{
//     public:
//     string color;
//     void print(){
//         cout<<"Vehicle"<<endl;
//     }
//     void add(){
//         cout<<"3"<<endl;
//     }
// };

// class Car:public Vehicle{
//     public:
//     int numGears;
//     void print(){
//         cout<<"Car"<<endl;
//     }

//     void add(){
//         cout<<"2"<<endl;
//     }
// };

// int main(){
//     Vehicle V;
//     Car C;

//     Vehicle*v1=new Vehicle;
//     Vehicle*v2;
//     v2=&C;
//     Vehicle*v3=new Car;

//     v1->print();
//     v2->print();
//     v3->print();

//     // Car*C3=new Vehicle; Error

// }

// // Output

// //Vehicle
// //Vehicle
// //Vehicle

// // V2 and V3 are pointing to child class but still they are printing the function of base class. This is due to function overriding. 
// // We didnt check that whom v2 is pointing and we are printing blindly. 
