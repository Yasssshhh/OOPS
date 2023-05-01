// Virtural Keyword
// We have seen how to prevent ambiguity from our code, but Bus class still has 2 copies of a print and we shold prevent that.
// When we use virtual keyword, now bus will directly call constructor of vehicle by itself, as our vechicle class is virtual class
// of Truck and Car( we can say that this car class object do not have an actual vehicle object, there is a pointer pointing to vehicle 
// class object.)

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

    void print(){
        cout<<"Vehicle's Print"<<endl;
    }

    ~Vehicle(){
        cout<<"Vehicles Destructor"<<endl;
    }

};

class Car:virtual public Vehicle{
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

};


class Truck:virtual public Vehicle{
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
// Truck's Constructor
// Bus constructor
// Cars Destructor
// Vehicles Destructor