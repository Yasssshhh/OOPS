// Constant member functions are those functions that are denied permission to change the values of 
// the data members of their class. An object declared as const cannot be modified and hence, can invoke 
// only const member functions as these functions ensure not to modify the object. 

//Constant functions can be called via any object, but constant object can only call constant funcions.

// Example: of Constant member function
// #include<iostream>
// using namespace std;

// class Demo
// {
// 	int x;

// 	public:
	
// 	void set_data(int a)
// 	{
// 		x=a;
// 	}

// 	const int get_data() 		 //constant member function
// 	{
// 		// ++x;				 // Error while attempting to modify the data member
// 		return x;
// 	}

// };


// int main()
// {
// 	Demo d;
// 	d.set_data(10);
// 	cout<<endl<<d.get_data();

// 	return 0;
// }


#include<iostream>
using namespace std;

class Test {
	int value;
public:
	Test(int v = 0) {value = v;}
	const int getValue() {return value;}
};

int main() {
	const Test t;
	cout << t.getValue(); //error
	return 0;
}