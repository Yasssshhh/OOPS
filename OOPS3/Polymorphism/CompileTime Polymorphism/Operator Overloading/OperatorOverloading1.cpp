//Operator Overloading

//In operator overloading, we can extend the functionality of our pre-existing opereator such that it will work for our user defined classes also.

//It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.
//For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by 
//just using +.Other example classes where arithmetic operators may be overloaded are Complex Numbers, Fractional Numbers, Big Integer, etc.


#include<iostream>
using namespace std;

int main(){

    int a=10;
    int b=20;

    int c=1.5;
    int d=3.5;

    char c1='a';
    char c2='b';

    cout<<a+b<<endl;
    cout<<c+d<<endl;
    cout<<c1+c2<<endl;
}

