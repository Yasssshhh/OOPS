#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Inheritance: Order of constructor and destructor. !Important

class vehicle{
    private:
    int maxSpeed;

    protected:
    int numTyres;

    public:
    string color;

    vehicle(){
        cout<<"Vehicles default constructor"<<endl;
    }

    ~vehicle(){
        cout<<"Vehicles Destructor"<<endl;
    }
};


class car:public vehicle{
    public:
    int numGears;

    car(){
        cout<<"Cars default constructor"<<endl;
    }

    //This is similar to :
    // car() : vehicle(){
    //     cout<<"Cars default constructor"<<endl;
    // }


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
    vehicle v;
    v.color="blue";

    car c;
    c.color="Black";
}


// Vehicles default constructor
// Vehicles default constructor
// Cars default constructor    
// Cars destructor
// Vehicles Destructor
// Vehicles Destructor

//In case of constructor, base class constructors are called first and then derived class constructor.
//If vehicle class do not have default constructor, we will get error here.

//Order of constructor invocation depends on order how base class is inherited.
//Order of desctuctor is just opposite.