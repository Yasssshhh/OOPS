// Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. 
// Encapsulation is defined as binding together the data and the functions that manipulate them.

// It is considered good practice to declare your class attributes as private (as often as you can). 
// Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
// Increased security of data.

//  A data validating function can stop illegal values from entering the object and preserving the integrity of the data.
// With data hiding, you can write code that checks the data coming into a class to make sure it is valid before assigning it to member variables.

#include <iostream>
using namespace std;


class Circle {

private:

	float area;
	float radius;

public:
	void getRadius()
	{
		cout << "Enter radius\n";
		cin >> radius;
	}
	void findArea()
	{
		area = 3.14 * radius * radius;
		cout << "Area of circle=" << area;
	}
};
int main()
{

	Circle cir;
	cir.getRadius(); 
	cir.findArea(); 

	Circle * cir2=new Circle();
	cir2->getRadius();
	cir2->findArea();

}
