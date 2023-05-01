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

    vehicle(){
        cout<<"Vehicles default constructor"<<endl;
    }


    vehicle(int x,int y){
        cout<<"Vehicles Paramaterized constructor"<<endl;
        maxSpeed=x;
        numTyres=y;
    }
    ~vehicle(){
        cout<<"Vehicles Destructor"<<endl;
    }
};


class car:public vehicle{
    public:
    int numGears;

    car(){
        cout<<"Car default Constructor"<<endl;
    }

    car(int x,int y): vehicle(x,y){
    cout<<"car paramaterised constructor"<<endl;
    numGears=y;
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


class Hondacity: public car{
    public:
    
    
    Hondacity(int x,int y): car(x,y){
    cout<<"Honda city constructor"<<endl;
    }

    ~Hondacity(){
        cout<<"Hondacity Destructor"<<endl;
    }
};


int main(){
    // car c;
    car(6,7);
}

// Vehicles default constructor
// car paramaterised constructor
// Cars destructor
// Vehicles Destructor

// As you can see that Car is having a parametrized constructor but Vechicle do not have paramaterized constructor,
// program will not give any error because default constructor of Vechile is called implicitly.



// Conclusion:(it may have some errors)
// If parent class have default constructor, you can make any constructor in derived class!
// But if parent class have paramaterised constructor and do not have default one, then be carefull while making constructor in derived 
// classes as you can only make those constructor in derived classes now, which are present in parent.

// Example:
// On adding this code to Vechicle class, you will get error.
//     vehicle(int x){
//         cout<<"HEHEH";
//     }