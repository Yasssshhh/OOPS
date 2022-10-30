#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Employee{
public:
virtual void calculateSalary()=0;
};

class HR :public Employee{
    public:
    void calculateSalary(){
    cout<<"Salary of HR:"<<12*10;
    }
};

class Manager :public Employee{
    public:
    void calculateSalary(){
    cout<<"Salary of Manager:"<<12*8;
}
};

class Engineer :public Employee{
    public:
    void calculateSalary(){
    cout<<"Salary of Engineer:"<<12*4;
}
};

class Other :public Employee{
    public:
    void calculateSalary(){
    cout<<"Salary of Other:"<<12;
}
};

int main(){

HR H1;
H1.calculateSalary();
Manager M1;
M1.calculateSalary();
Engineer E1;
E1.calculateSalary();
Other O1;
O1.calculateSalary();

}