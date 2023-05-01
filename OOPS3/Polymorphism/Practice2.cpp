#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function Overloading practice 1

// int fun(int a,int b){
//     return a+b;
// }

// // double fun(int c,int d){
// //     return c+d;
// // } //error


// int fun(int c,double d){
//     return c+d;
// } 
// int main(){

// int a;
// int b;
// int c;
// double d;

// cin>>a>>b>>c>>d;

// int ans1=fun(a,b);
// int ans2=fun(c,d);

// cout<<ans1<<" "<<ans2<<endl;

// return 0;

// }


// Friend Functions practice 1

// class Bus{
//     public:
//     void print();
//     // int profit;
// };

// class Vechicle{
//     public:
//     string type;

//     void printType(){
//         cout<<type<<endl;
//     }
    
//     protected:
//     int sellingPrice;

//     void showPrice(){
//         cout<<sellingPrice<<endl;
//     }

//     private:
//     int costPrice;

//     friend void Bus::print();
//     // friend int  Bus::profit;
// };

// void Bus::print(){
//     Vechicle v;
//     v.type="nano";
//     v.sellingPrice=100000;
//     v.costPrice=50000;

//     cout<<v.type<<" "<<v.sellingPrice<<" "<<v.costPrice<<endl;
// }

// // Friend variable does not exists.
// // int Bus::profit{
// //     Vechicle v;
// //     v.sellingPrice=100000;
// //     v.costPrice=50000;
// //     cout<<v.sellingPrice-v.costPrice<<endl;
// // }

// int main(){
// Bus b;
// b.print();
// b.profit;
// }




//Friend functions practice 2


class Bus{
    public:
    void print();

    int profit(int x,int y){
        return x+y;
    }
};

class Vechicle{
    public:
    string type;

    void printType(string type){
        cout<<type<<endl;
    }
    
    protected:
    int sellingPrice;

    void showPrice(int sellingPrice){
        cout<<sellingPrice<<endl;
    }

    int profit(int x,int y){
        return x-y;
    }

    private:
    int costPrice;
    friend void Bus::print();
};

void Bus::print(){
    Bus b;
    Vechicle v;
    v.type="nano";
    v.sellingPrice=100000;
    v.costPrice=50000;

    cout<<v.profit(100000,50000)<<endl;
    cout<<b.profit(100000,50000)<<endl;
}


int main(){
Bus b;
b.print();
}
