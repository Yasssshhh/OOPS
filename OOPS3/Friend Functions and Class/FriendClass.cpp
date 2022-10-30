// Friend Class A friend class can access private and protected members of other class in which it is declared as friend. 
// It is sometimes useful to allow a particular class to access private members of other class.

// Example 1:

// #include<iostream>
// using namespace std;

// class A
// {
// 	int x;
// 	public:
			
// 	A(){
// 		x=10;
// 	}

// 	friend class B; 
// };

// class B
// {
// 	public:
// 		void display(A &t)
// 		{
// 			cout<<endl<<"The value of x="<<t.x;
// 		}
// };

// main()
// {
// 	A a1;
// 	B b1;
// 	b1.display(a1);
// 	return 0;
// }

//The value of x=10


// Example 2:

// #include <iostream>
// class A {
// private:
// 	int a;

// public:
// 	A() { a = 0; }
// 	friend class B; 
// };

// class B {
// private:
// 	int b;

// public:
// 	void showA(A& x)
// 	{
// 		std::cout << "A::a=" << x.a;
// 	}
// };

// int main()
// {
// 	A a;
// 	B b;
// 	b.showA(a);
// 	return 0;
// }