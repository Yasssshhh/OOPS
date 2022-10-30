//Inbuilt copy constructor always does shallow copy, so we should make our own copy constructor.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// class Student{
//     int age;

//     public:
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

//     Student S2(S1);

//     S1.display();
//     S2.name[0]='x';

//     S1.display();
//     S2.display();
// }

// abcd 20
// xbcd 20
// xbcd 20


//Lets make our own copy constructor.

class Student{
    int age;

    public:
    char*name;

    public:
    Student(int age,char*name){
        this->age=age;

        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    //& symbol is important here to prevent infinte loop and to avoid creation of new memory block
    Student(Student const &s){
        this->age=s.age;
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }

    void const display(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){

    char name[]="abcd";
    Student S1(20,name);

    Student S2(S1);

    S1.display();
    S2.name[0]='x';

    S1.display();
    S2.display();
}

// abcd 20
// abcd 20
// xbcd 20
