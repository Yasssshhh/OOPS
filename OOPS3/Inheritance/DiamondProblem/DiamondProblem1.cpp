#include<bits/stdc++.h>
using namespace std;

// The Diamond Problem is an ambiguity that arises in multiple inheritance when two parent classes inherit from the same grandparent 
// class and both parent classes are inherited by a single child class.

class Vehicle{
    private:
    int maxSpeed;
    protected:
    int numTyres;
    public:
    string color;

    Vehicle(){
        cout<<"Vehicles default constructor is called:"<<endl;
    }
 
    void print(){
        cout<<"Vehicle"<<endl;
    }

    Vehicle(int z){
        cout<<"Vehicles parameterised constructor is called:"<<endl;
    }

    ~Vehicle(){
        cout<<"Vehicles Destructor"<<endl;
    }

};

class Car:public Vehicle{
    public:
    int numGears;

    Car(){
        cout<<"Cars default constructor is called:"<<endl;
    }
    Car(int x,int y):Vehicle(y){
        cout<<"Cars constructor"<<endl;
        numGears=y;
    }

    // void print(){
    //     cout<<"NumTyres"<<numTyres<<endl;
    //     cout<<"Color"<<color<<endl;
    //     cout<<"NumGears"<<numGears<<endl;
    //     // cout<<"maxSpeed"<<maxSpeed<<endl;
    // }
};


class Truck:public Vehicle{
    public:
    Truck(){
        cout<<"Truck's Constructor"<<endl;
    }
};

class Bus:public Car,public Truck{
    public:
    Bus(){
        cout<<"Bus constructor"<<endl;
    }
};


int main(){
    Bus b;
    b.print();
}

// DiamondProblem.cpp: In function 'int main()':
// DiamondProblem.cpp:68:7: error: request for member 'print' is ambiguous
//      b.print();
//        ^~~~~
