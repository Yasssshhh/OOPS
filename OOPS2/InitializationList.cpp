// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     int age;
//     const int rollNumber;
//     const string School;

//     Student(int r,string x):rollNumber(r),School(x){
//         cout<<this->rollNumber<<endl;
//     }

//     void display(){
//         cout<<this->rollNumber<<" "<<this->School<<endl;
//     }
// };

// int main(){

//     Student S1(101,"NDPS");
//     S1.age=20;
//     // S1.School="PDPS";  (error)
//     S1.display();
// }

// // 101
// // 101 NDPS

//Example 2

// #include<iostream>
// using namespace std;

// class Test {
// 	const int t;
//     public:
// 	Test(int t):t(t) {} //Initializer list must be used, which should be decalred public.
// 	int getT() { return t; }
// };

// int main() {
// 	Test t1(10);
// 	cout<<t1.getT();
// 	return 0;
// }

/* OUTPUT:
10
*/

// Example 3
// Initialization of reference data members

// #include<iostream>
// using namespace std;

// class Test {
// 	int &t;
// public:
// 	Test(int &t):t(t) {} //Initializer list must be used
// 	int getT() { return t; }
// };

// int main() {
// 	int x = 20;
// 	Test t1(x);
// 	cout<<t1.getT()<<endl;
// 	x = 30;
// 	cout<<t1.getT()<<endl;
// 	return 0;
// }

// /* OUTPUT:
// 	20
// 	30
// */
