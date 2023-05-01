#include<iostream>
using namespace std;

class Vehicle{
    private:
    int maxSpeed;
    protected:
    int numTyres;
    public:
    string color;

    // Vehicle(){
    //     cout<<"Vehicles default constructor is called:"<<endl;
    // }

    Vehicle(int z){
        cout<<"Vehicles parameterised constructor is called:"<<endl;
    }

    ~Vehicle(){
        cout<<"Vehicles Destructor"<<endl;
    }

};

class Car:virtual public Vehicle{
    public:
    int numGears;

    Car():Vehicle(3){
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
    Truck():Vehicle(4){
        cout<<"Truck's Constructor"<<endl;
    }
};

class Bus:public Car,public Truck{
    public:
    Bus():Vehicle(5){
        cout<<"Bus constructor"<<endl;
    }
};


int main(){
    Bus b;
}


// Vehicles parameterised constructor is called:
// Cars default constructor is called:
// Truck's Constructor
// Bus constructor
// Cars Destructor
// Vehicles Destructor