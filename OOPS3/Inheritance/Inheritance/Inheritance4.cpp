#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//More practice on constructor (paramaterized version)

class vehicle{
    private:
    int maxSpeed;

    protected:
    int numTyres;

    public:
    string color;

    // vehicle(){
    //     cout<<"Vehicles default constructor"<<endl;
    // } // no error as we are calling parameterized constructor before going to default constructor of car.

    vehicle(int z){
        cout<<"Vehicles paramaterized constructor"<<endl;
        maxSpeed=z;
    }

    ~vehicle(){
        cout<<"Vehicles Destructor"<<endl;
    }
};


class car:public vehicle{
    public:
    int numGears;
    
    //default constructor is called implicity but to call parameterized constructor of parent,you need to call explicitly.
    car() : vehicle(5){
    cout<<"Car default constructor"<<endl;
    numGears=5;
    }

    ~car(){
        cout<<"Cars destructor"<<endl;
    }

    void print(){
        cout<<"NumTyres:"<<numTyres<<endl;
        cout<<"Color:"<<color<<endl;
        cout<<"NumGears:"<<numGears<<endl;
    }
};



int main(){
    car c;
}

// Vehicles paramaterized constructor
// Car default constructor 
// Cars destructor
// Vehicles Destructor

//By default only default constructor is called, if you want to call paramaterized one, explicitly mension it. 