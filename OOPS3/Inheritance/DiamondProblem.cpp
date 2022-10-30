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

//     // void print(){
//     //     cout<<"NumTyres"<<numTyres<<endl;
//     //     cout<<"Color"<<color<<endl;
//     //     cout<<"NumGears"<<numGears<<endl;
//     //     // cout<<"maxSpeed"<<maxSpeed<<endl;
//     // }
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
//     b.print();
// }

// DiamondProblem.cpp:65:7: error: 'class Bus' has no member named 'print'
    //  b.print();
    //    ^~~~~



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

//     void print(){
//         cout<<"NumTyres"<<numTyres<<endl;
//         cout<<"Color"<<color<<endl;
//         cout<<"NumGears"<<numGears<<endl;
//         // cout<<"maxSpeed"<<maxSpeed<<endl;
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
//     b.print();
// }

// Vehicles default constructor is called:
// Cars default constructor is called:    
// Vehicles default constructor is called:
// Truck's Constructor
// Bus constructor
// NumTyres4200976
// Color
// NumGears6422280
// Vehicles Destructor
// Vehicles Destructor


// Virtural Keyword

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

//     ~Vehicle(){
//         cout<<"Vehicles Destructor"<<endl;
//     }

// };

// class Car:virtual public Vehicle{
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

//     // void print(){
//     //     cout<<"NumTyres"<<numTyres<<endl;
//     //     cout<<"Color"<<color<<endl;
//     //     cout<<"NumGears"<<numGears<<endl;
//     //     // cout<<"maxSpeed"<<maxSpeed<<endl;
//     // }
// };


// class Truck:virtual public Vehicle{
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
// }


// Vehicles default constructor is called:
// Cars default constructor is called:    
// Truck's Constructor
// Bus constructor
// Cars Destructor
// Vehicles Destructor


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

    // void print(){
    //     cout<<"NumTyres"<<numTyres<<endl;
    //     cout<<"Color"<<color<<endl;
    //     cout<<"NumGears"<<numGears<<endl;
    //     // cout<<"maxSpeed"<<maxSpeed<<endl;
    // }
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


