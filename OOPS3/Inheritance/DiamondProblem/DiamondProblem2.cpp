#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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

    Vehicle(int z){
        cout<<"Vehicles parameterised constructor is called:"<<endl;
    }
    // void print(){
    //     cout<<"Vehicle"<<endl;
    // } // error will be thrown if you comment this out.

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

    ~Car(){
        cout<<"Cars Destructor"<<endl;
    }

    void print(){
        cout<<"NumTyres"<<" "<<numTyres<<endl;
        cout<<"Color"<<" "<<color<<endl;
        cout<<"NumGears"<<" "<<numGears<<endl;
    }
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

// Vehicles default constructor is called:
// Cars default constructor is called:    
// Vehicles default constructor is called:
// Truck's Constructor
// Bus constructor
// NumTyres 4200976
// Color 
// NumGears 6422280
// Vehicles Destructor
// Cars Destructor
// Vehicles Destructor