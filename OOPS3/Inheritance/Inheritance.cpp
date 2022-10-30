#include<bits/stdc++.h>
using namespace std;

// class vehicle{
//     private:
//     int maxSpeed;

//     protected:
//     int numTyres;

//     public:
//     string color;
// };


// class Car:public vehicle{
//     public:
//     int numGears;

//     void print(){
//         cout<<"NumTyres"<<numTyres;
//         cout<<"Color"<<color;
//         cout<<"NumGears"<<numGears;
//     }
// };


// int main(){
//     vehicle V;
//     V.color="Blue";
//     // V.maxSpeed=100; this will give error because maxSpeed is private member of class vehicle.
//     // V.numTyres=4;   this will give error because maxSpeed is protected member of class vehicle.

//     Car c;
//     c.color="Blue";
//     // c.numTyres=4; this will give error because numTyres is protected member of class vehicle and it can only be used by derived class of vehicle.
//     c.numGears=5;
// }

// ================================================================================================================================

//Inheritance: Order of constructor and destructor.

// class vehicle{
//     private:
//     int maxSpeed;

//     protected:
//     int numTyres;

//     public:
//     string color;

//     vehicle(){
//         cout<<"Vehicles default constructor"<<endl;
//     }

//     vehicle(int z){
//         cout<<"Vehicles paramaterized constructor"<<endl;
//         maxSpeed=z;
//     }

//     ~vehicle(){
//         cout<<"Vehicles Destructor"<<endl;
//     }
// };


// class car:public vehicle{
//     public:
//     int numGears;

//     car(){
//         cout<<"Cars default constructor"<<endl;
//     }

//     // car(int x,int y) : vehicle(x){
//     // cout<<"car paramaterized constructor called";
//     // numGears=y;
//     // }

//     ~car(){
//         cout<<"Cars destructor"<<endl;
//     }

//     void print(){
//         cout<<"NumTyres:"<<numTyres<<endl;
//         cout<<"Color:"<<color<<endl;
//         cout<<"NumGears:"<<numGears<<endl;
//     }
// };


// int main(){
//     vehicle v;
//     v.color="blue";

//     car c;
//     c.color="Black";
// }


// Vehicles default constructor
// Vehicles default constructor
// Cars default constructor    
// Cars destructor
// Vehicles Destructor
// Vehicles Destructor


// class vehicle{
//     private:
//     int maxSpeed;

//     protected:
//     int numTyres;

//     public:
//     string color;

//     vehicle(){
//         cout<<"Vehicles default constructor"<<endl;
//     }

//     vehicle(int z){
//         cout<<"Vehicles paramaterized constructor"<<endl;
//         maxSpeed=z;
//     }

//     ~vehicle(){
//         cout<<"Vehicles Destructor"<<endl;
//     }
// };


// class car:public vehicle{
//     public:
//     int numGears;

//     car() : vehicle(5){
//     cout<<"car default constructor called"<<endl;
//     numGears=5;
//     }

//     ~car(){
//         cout<<"Cars destructor"<<endl;
//     }

//     void print(){
//         cout<<"NumTyres:"<<numTyres<<endl;
//         cout<<"Color:"<<color<<endl;
//         cout<<"NumGears:"<<numGears<<endl;
//     }
// };



// int main(){
//     car c;
// }

// Vehicles paramaterized constructor
// car default constructor called
// Cars destructor
// Vehicles Destructor




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

    car(int x,int y) : vehicle(x){
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
    // } //showing error because we dont have default constructor of car class which is parent of this class.
    
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

//If child wants to make a type of constructor, then parent should also have that.