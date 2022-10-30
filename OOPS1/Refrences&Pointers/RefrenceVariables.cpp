// When a variable is declared as a reference, it becomes an alternative name for an existing variable. 
// A variable can be declared as a reference by putting ‘&’ in the declaration. 

// Applications :  

// 1. Modify the passed parameters in a function: If a function receives a reference to a variable,
// it can modify the value of the variable. 

#include <iostream>
using namespace std;

void swap(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

int main()
{
	int a = 2, b = 3;
	swap(a, b);
	cout << a << " " << b;
	return 0;
}

// 2. Avoiding a copy of large structures: Imagine a function that has to receive a large object.
// If we pass it without reference, a new copy of it is created which causes wastage of CPU time and
// memory. We can use references to avoid this.

// struct Student {
// 	string name;
// 	string address;
// 	int rollNo;
// }

// // If we remove & in below function, a new
// // copy of the student object is created.
// // We use const to avoid accidental updates
// // in the function as the purpose of the function
// // is to print s only.
// void print(const Student &s)
// {
// 	cout << s.name << " " << s.address << " " << s.rollNo
// 		<< '\n';
// }


