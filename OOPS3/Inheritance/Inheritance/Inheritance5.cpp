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

    // vehicle(int z){
    //     cout<<"Vehicles paramaterized constructor"<<endl;
    //     maxSpeed=z;
    // }

    ~vehicle(){
        cout<<"Vehicles Destructor"<<endl;
    }
};


class car:public vehicle{
    public:
    int numGears;

    car(int x,int y){
    cout<<"car paramaterised constructor called"<<endl;
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
    
    // Hondacity(){
    //     cout<<"Hondacity default constructor"<<endl;
    // } //showing error because we don't have default constructor of car class which is parent of this class.
    
    Hondacity(int x,int y): car(x,y){
    cout<<"Honda city constructor"<<endl;
    }

    ~Hondacity(){
        cout<<"Hondacity Destructor"<<endl;
    }
};


int main(){
    Hondacity(4,5);
}


// Vehicles paramaterized constructor  
// car paramaterised constructor called
// Honda city constructor
// Hondacity Destructor
// Cars destructor
// Vehicles Destructor

//If child wants to make a type of constructor, then parent should also have that.(in case of default only)

// If car will not call vehicle's paramaterised constructor, then also this code will run as existance of vehicle's paramaterised constructor
// does not bother Hondacity.

//  car(int x,int y){
//  cout<<"car paramaterised constructor called"<<endl;
//  numGears=y;
//  }

// Vehicles default constructor
// car paramaterised constructor called
// Honda city constructor
// Hondacity Destructor
// Cars destructor
// Vehicles Destructor