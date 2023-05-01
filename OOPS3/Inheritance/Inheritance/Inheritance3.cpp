#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class vehicle{
    private:
    int maxSpeed;

    protected:
    int numTyres;

    public:
    string color;

    // vehicle(){
    //     cout<<"Vehicles default constructor"<<endl;
    // } 
    // No eror will be there because if you will not write this, compiler will internally make a default constructor.
    //But if you will make a paramaterized constructor here, then make a default constuctor explicitly else you will get error.  

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

    ~car(){
        cout<<"Cars destructor"<<endl;
    }

};


int main(){
    car c;
}

// Cars default constructor
// Cars destructor
// Vehicles Destructor