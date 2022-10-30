// - Friendship is not inherited (If a base class has a friend function, then the function doesn’t become a friend of the derived class(es). )

#include <iostream>
using namespace std;

class A {
protected:
	int x;

public:
	A() { x = 0; }
	friend void show();
};

// Child Class
class B : public A {
private:
	int y;

public:
	B() { y = 0; }
};

void show()
{
	B b;
	cout << "The default value of A::x = " << b.x;

	// Can't access private member declared in class 'B'
	// cout << "The default value of B::y = " << b.y;
}

int main()
{
	show();
	return 0;
}

// The default value of A::x = 0