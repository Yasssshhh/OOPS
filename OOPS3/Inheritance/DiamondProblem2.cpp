#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Vehicle{

    private: int maxSpeed;
    protected: int numTyres;
    public: string color;

    Vehicle(){
        cout<<"Vehicle default constructor"<<endl;
    }
     
    Vehicle(int z){
        maxSpeed=z;
        cout<<"Vehicle's paramaterized constructor"<<" "<<z<<endl; 
         cout<<"Color"<<color<<endl;
    }

    void print(){
        cout<<"Vehicle"<<endl;
    }

    ~Vehicle(){
        cout<<"Vehicle Destructor"<<endl;
    }
};


class Car:virtual public Vehicle{

    public:
    int numGears;

    Car():Vehicle(3){
        cout<<"Car default Constructor"<<endl;
    }

    Car(int x,int y):Vehicle(x){
        cout<<"Car's Constructor"<<endl;
        numGears=x;
    }    
    ~Car(){
        cout<<"Cars Destructor"<<endl;
    }

    // void print(){
    //     cout<<"NumTyres"<<numTyres<<endl;
    //     cout<<"Color"<<color<<endl;
    //     cout<<"NumGears"<<numGears<<endl;

    // }
};


class Truck:virtual public Vehicle{

    public:
    Truck():Vehicle(){
        cout<<"Trucks default Constructor"<<endl;
    }
    ~Truck(){
        cout<<"Trucks Destructor"<<endl;
    }
};


class Bus:public Car,public Truck{

    public:
    Bus():Vehicle(5){
        cout<<"Bus default Constructor"<<endl;
    }
    ~Bus(){
        cout<<"Bus Destructor"<<endl;
    }

    // void print(){
    //     cout<<"Print funtion of b"<<endl;
    // }
};


int main(){

Bus b;
// b.print();
b.color="red";
}

// Vehicle default constructor 5
// Car default Constructor
// Trucks default Constructor
// Bus default Constructor
// Vehicle
// Bus Destructor
// Trucks Destructor
// Cars Destructor
// Vehicle Destructor


// int main(){
// Car c;
// c.print();
// }

// Vehicle's paramaterized constructor 3
// Car default Constructor
// Vehicle
// Cars Destructor
// Vehicle Destructor

