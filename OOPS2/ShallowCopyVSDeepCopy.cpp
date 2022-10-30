#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //Shallow Copy

//In shallow copy, an object is created by simply copying the data of all variables of the original object. 

// class Student{
//     int age;
//     char*name;

//     public:
//     Student(int age,char*name){
//         this->age=age;
//         this->name=name;
//     }

//     void display(){
//         cout<<name<<" "<<age<<endl;
//     }
// };


// int main(){

//     char name[]="abcd";
//     Student S1(20,name);

//     S1.display();

//     name[3]='e';
//     Student S2(25,name);

//     S2.display();
//     S1.display();
// }

// // abcd 20
// // abce 25 //S2 didnt copied the whole name, it only copied the 0th index address.
// // abce 20

// //Deep Copy 
// In Deep copy, an object is created by copying data of all variables, and it also allocates similar memory resources with the 
// same value to the object. 


class Student{
    int age;
    char*name;

    public:
    Student(int age,char*name){
        this->age=age;
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};


int main(){

    char name[]="abcd";
    Student S1(20,name);

    S1.display();

    name[3]='e';
    Student S2(25,name);

    S2.display();
    S1.display();
}

// abcd 20
// abce 25
// abcd 20