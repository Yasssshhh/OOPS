//Solutions to diamond problem//

//Solution 1//
// Explicitly mension which print function to call.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// class Vehicle{
//     private:
//     int maxSpeed;
//     protected:
//     int numTyres;
//     public:
//     string color;

//     Vehicle(){
//         cout<<"Vehicles default constructor is called:"<<endl;
//     }

//     Vehicle(int z){
//         cout<<"Vehicles parameterised constructor is called:"<<endl;
//     }
//     void print(){
//         cout<<"Vehicle"<<endl;
//     } 

//     ~Vehicle(){
//         cout<<"Vehicles Destructor"<<endl;
//     }

// };

// class Car:public Vehicle{
//     public:
//     int numGears;

//     Car(){
//         cout<<"Cars default constructor is called:"<<endl;
//     }
//     Car(int x,int y):Vehicle(y){
//         cout<<"Cars constructor"<<endl;
//         numGears=y;
//     }

//     ~Car(){
//         cout<<"Cars Destructor"<<endl;
//     }

// };


// class Truck:public Vehicle{
//     public:
//     Truck(){
//         cout<<"Truck's Constructor"<<endl;
//     }
// };

// class Bus:public Car,public Truck{
//     public:
//     Bus(){
//         cout<<"Bus constructor"<<endl;
//     }
// };


// int main(){
//     Bus b;
//     b.Car:: print();
// }

// Vehicles default constructor is called:
// Cars default constructor is called:
// Vehicles default constructor is called:
// Truck's Constructor
// Bus constructor
// Vehicle
// Vehicles Destructor
// Cars Destructor
// Vehicles Destructor

//Solution 2//
// Create print funtion in bus class itself, because if there is a funtion in class itelf, it does not check its parents/


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
        cout<<"Vehicle"<<endl;
    } 

    ~Vehicle(){
        cout<<"Vehicle's Destructor"<<endl;
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
        cout<<"Car's Destructor"<<endl;
    }

};


class Truck:public Vehicle{
    public:
    Truck(){
        cout<<"Truck's Constructor"<<endl;
    }
    ~Truck(){
        cout<<"Truck's Destructor"<<endl;
    }
};

class Bus:public Car,public Truck{
    public:
    Bus(){
        cout<<"Bus constructor"<<endl;
    }
    void print(){
        cout<<"Bus print"<<endl;
    }

    ~Bus(){
        cout<<"Bus's Destructor"<<endl;
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
// Bus print
// Bus's Destructor
// Truck's Destructor
// Vehicle's Destructor
// Car's Destructor
// Vehicle's Destructor