// Constant member functions are those functions that are denied permission to change the values of 
// the data members of their class.an object declared as const cannot be modified and hence, can invoke 
// only const member functions as these functions ensure not to modify the object. 


// // Example: Not a constant member function.
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

// 	int get_data()
// 	{
// 		++x;
// 		return x;
// 	}

// };

// main()
// {
// 	Demo d;
// 	d.set_data(10);
// 	cout<<endl<<d.get_data();
// 	return 0;
// }

// //Output:11

// // Example: of Constant member function
#include<iostream>
using namespace std;

class Demo
{
	int x;

	public:
	
	void set_data(int a)
	{
		x=a;
	}

	int get_data() const		 //constant member function
	{
		// ++x;				 // Error while attempting to modify the data member
		return x;
	}

};


int main()
{
	Demo d;
	d.set_data(10);
	cout<<endl<<d.get_data();

	return 0;
}


#include<iostream>
using namespace std;

class Test {
	int value;
public:
	Test(int v = 0) {value = v;}
	int getValue() {return value;}
};

int main() {
	const Test t;
	// cout << t.getValue();
    // Non-const functions can only be called by non-const objects. 
    // Constant functions can be called on any type of object.
	return 0;
}
