// When a data member is declared as static , only one copy of the data is maintained for all objects of the class.
// Static data members are class members that are declared using static keywords. A static member has certain special characteristics. These are:

// Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
// It is initialized before any object of this class is being created, even before main starts.
// It is visible only within the class, but its lifetime is the entire program
// Static functions don't have this pointer.(as we do not call static function through object,so it will get nothing in this).

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// class Student{
//     public:
//     int rollNo;
//     int age;

//     static int totalStudents;

//     //Static function(the property for which this function is working is static,so it is made static)
//     // if static keyword is not there then(error: cannot call member function 'int Student::getTotalStudents()' without object)
//     static int getTotalStudents(){
//         return totalStudents;
//     }
// };


// int Student::totalStudents=10;

// int main(){
//     Student S1,S2,S3,S4,S5;
//     cout<<S1.rollNo<<" "<<S1.age<<endl;
//     cout<<Student :: totalStudents<<endl;
//     cout<<Student :: getTotalStudents()<<endl;

//     // S1.totalStudents=20; //logically incorrect
//     // cout<<S1.totalStudents<<endl;//logically inorrect
// }


// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;


// class Student{
//     public:
//     int rollNo;
//     int age;

//     private:
//     static int totalStudents;

//     public:
//     Student(){
//         totalStudents++;
//     }


//     //Static function(the property for which this function is working is static,so it is maden static)
//     //as we declared totalstudents private now, we have to use this function to get value of totalstudents.
//     static int getTotalStudents(){
//         return totalStudents;
//     }
// };

// int Student::totalStudents=10;

// int main(){
//     Student S1,S2,S3,S4,S5;
//     cout<<S1.rollNo<<" "<<S1.age<<endl;
//     // cout<<Student :: totalStudents<<endl;
//     cout<<Student :: getTotalStudents()<<endl;
// }