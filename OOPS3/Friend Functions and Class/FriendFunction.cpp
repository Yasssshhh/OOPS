// A friend function can be given a special grant to access private and protected members. A friend function can be: 
// a) A member of another class (print() in our case)
// b) A global function (test() in our case)

// The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition.
// Friend function can be declared in any section of the class i.e. public or private or protected.

#include<iostream>
using namespace std;

//It is important to keep bus class above the truck. // forward declaration
 
class Bus{
    public:
    void print();
};

class Truck{
    private:
    int x;

    protected:
    int y;

    public:
    int z;

    //Making print function of Bus class as friend function.
    friend void Bus::print();
    //Making a global function friend.
    friend void test();
};

void Bus::print(){
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
}

void test(){
Truck t;
t.x=10;
t.y=20;
cout<<t.x<<" "<<t.y<<endl;
}

int main(){
    Bus b;
    b.print();
    test();
}

// NOTE:
// - Friends should be used only for limited purpose. too many functions or external classes are declared as friends of a class with protected or private data, 
//   it lessens the value of encapsulation of separate classes in object-oriented programming.
// - Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
// - A friend function is able to access members without the need of inheriting the class.

// - Friend functions have access to private members of a class from outside the class which violates the law of the data hiding.
// - Friend functions cannot do any run time polymorphism in its members.