#include<iostream>
using namespace std;

class DynamicArray{

int*data; //pointer 
int nextindex; //to store elements to a corresponding index
int capacity; // to store capacity of array

public:
DynamicArray(){
    data=new int[5];
    nextindex=0;
    capacity=5; //initally we are taking 5 size array
}

//Copy constructor.
DynamicArray(DynamicArray const &d){
    //this->data=data //shallow copy (always avoid shallow copy)
    //Deep copy
    this->data=new int[d.capacity];

    for(int i=0;i<d.nextindex;i++){
        this->data[i]=d.data[i];
    }
    this->nextindex=d.nextindex;
    this->capacity=d.capacity;
}

//Copy Assignment Operator.
void operator=(DynamicArray const &d){
    //this->data=data //shallow copy (always avoid shallow copy)
    //Deep copy
    this->data=new int[d.capacity];
    for(int i=0;i<d.nextindex;i++){
        this->data[i]=d.data[i];
    }
    this->nextindex=d.nextindex;
    this->capacity=d.capacity;
}

void add(int element){

    //if size of array is full, we will double it's capacity.
    if(nextindex==capacity){
        int*newdata=new int[2*capacity];
        for(int i=0;i<nextindex;i++){
            newdata[i]=data[i];
        }
        delete []data;
        data=newdata;
        capacity=2*capacity;
    }
        data[nextindex]=element;
        nextindex++;
}

//To get value.
int get(int i) const{
    if(i>=0 && i<nextindex)return data[i];
    else return -1;
}

//Add in a specific position.
void add(int element,int i){

    if(i>nextindex)return;
    else if(i==nextindex) add(element);
    else if(i<nextindex){
        data[i]=element;
    }
}
// To print elements in range.
void print() const{
    for(int i=0;i<nextindex;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
};

// int main(){
//     DynamicArray d1;
//     d1.add(10);
//     d1.add(20);
//     d1.add(30);
//     d1.add(40);
//     d1.add(50);
//     d1.add(60);

//     d1.print();
//     DynamicArray d2(d1); //Copy constructor
//     DynamicArray d3;
//     d3=d1;              //Copy Assignment Operator

//     d1.add(100,0);
//     d2.print();
//     d3.print();
// }

// OUTPUT
// 10 20 30 40 50 60
// 100 20 30 40 50 60
// 100 20 30 40 50 60


//Inbuilt copy constructor and copy assignment operator always does shallow copy.

int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    DynamicArray d2(d1); 
    DynamicArray d3;
    d3=d1;        

    d1.add(100,0);
    d1.print();
    d2.print();
    d3.print();
}

// OUTPUT
// 100 20 30 40 50 60
// 10 20 30 40 50 60
// 10 20 30 40 50 60