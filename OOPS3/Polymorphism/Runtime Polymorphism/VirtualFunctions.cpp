// //VIRTUAL FUNCTIONS

// Virtual function is a member function that is declared in base class using the keyword virtual and is re-defined (Overriden) in the derived class. 
// The compiler makes sure the replacement is always 
// called whenever the object in question is actually of the derived class, even if the object is accessed by a base pointer rather than a derived pointer.
// Virtual functions are Dynamic in nature. A virtual function is called during Runtime


// //Example 1

// #include<iostream>
// using namespace std;

// class Vehicle{
//     public:
//     string color;
//     virtual void print(){
//         cout<<"Vehicle"<<endl;
//     }
//     virtual void  add(){
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
    
//     V.print();
//     C.print();

//     Vehicle*v1=new Vehicle;
//     Vehicle*v2;
//     v2=&C;

//     v1->print();
//     v2->print();

//     v1->add();
//     v2->add();
//     }

// // Vehicle
// // Car
// // Vehicle
// // Car
// // 3
// // 2

// //Example 2

// #include <iostream>
// using namespace std;

// class GFG_Base {

// public:

// 	virtual void display()
// 	{
// 		cout << "Called virtual Base Class function" <<
// 				"\n\n";
// 	}

// 	void print()
// 	{
// 		cout << "Called GFG_Base print function" <<
// 				"\n\n";
// 	}
// };


// class GFG_Child : public GFG_Base {

// public:
// 	void display()
// 	{
// 		cout << "Called GFG_Child Display Function" <<
// 				"\n\n";
// 	}

// 	void print()
// 	{
// 		cout << "Called GFG_Child print Function" <<
// 				"\n\n";
// 	}
// };

// int main()
// {

// 	GFG_Base* base;

// 	GFG_Child child;

// 	base = &child;

//     //If you want to print base class funtion which is virtual, you can use ::
// 	base->GFG_Base::display();

//     base->display();
    
// 	base->print();
// }

// Called virtual Base Class function
// Called GFG_Child Display Function
// Called GFG_Base print function

// Advantages :

// Polymorphism
// Reusability of code
// Small program length
// A virtual function allows derived classes to replace the implementation provided by the base class.

// Disadvantage:
// Classes with virtual functions are generally meant to be inherited from. The derived classes may replace some, all or none of the virtual functions. 
// This can create additional complexity and complexity is the programmers mortal enemy. 