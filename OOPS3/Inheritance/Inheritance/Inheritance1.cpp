#include<bits/stdc++.h>
using namespace std;

//Base Class
class vehicle{
    private:
    int maxSpeed;

    protected:
    int numTyres;

    public:
    string color;
};

//Derived Class
class Car:public vehicle{
    public:
    int numGears;

    void print(){
        cout<<"NumTyres"<<numTyres<<endl;
        cout<<"Color"<<color<<endl;
        cout<<"NumGears"<<numGears<<endl;
        // cout<<"MaxSpeed"<<maxSpeed<<endl; error
    }
};


int main(){
    vehicle V;
    V.color="Blue";
    // V.maxSpeed=100; this will give error because maxSpeed is private member of class vehicle.
    // V.numTyres=4;   this will give error because maxSpeed is protected member of class vehicle.

    Car c;
    c.color="Blue";
    // c.numTyres=4; this will give error because numTyres is protected member of class vehicle 
    // and it can only be used by derived class of vehicle. (i.e Car class)
    // c is object of Car class and it cannot access it.
    c.numGears=5;
    c.print();
}

// NumTyres-1261678904
// ColorBlue
// NumGears5