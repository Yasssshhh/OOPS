//Access Specifiers.
//Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding and they set some 
// restrictions on the class members so that they can’t be directly accessed by the outside functions.

//Public:
// All the class members declared under the public specifier will be available to everyone. 
// The data members and member functions declared as public can be accessed by other classes and functions too.

//Private: 
// The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed 
// directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of the class. 
//In c++ by default our class members are private.

//  The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. 
//  The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 


//Public Access Modifier

// class University{
    
//     public:
//     string universityName;
//     int StudentsCount;
//     int rating;
// };

// class Student{

//     public:
//     string StudentName;
//     int rollNo;
//     int age;
//     // int age=rating; X
    
// };

// int main(){

//     Student s1;
//     s1.StudentName="Yash Pathak";
//     s1.age=20;
//     s1.rollNo=210;

//     // s1.universityName="MAIT" X (accessed only to other classes and everyone but not the object of other class.)
//     //Yes it is a public variable and accessible outside class, but atleast make an object to access it.

//     cout<<s1.StudentName<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.rollNo<<endl;

// }


//Private Access Modifier

// class Circle
// {  
//     // private data member
//     private:
//         double radius;
      
//     // public member function   
//     public:   
//         double  compute_area()
//         {   // member function can access private data member radius.
//             return 3.14*radius*radius;
//         }
     
// };
 
// int main()
// {  
//     Circle obj;
     
//     obj.radius = 1.5; //Error 
     
//     cout << "Area is:" << obj.compute_area();
//     return 0;
// }


//Protected Data members.

// class Parent
// {  
//     protected:
//     int id_protected; 
// };
 
// class Child : public Parent
// {
//     public:
//     void setId(int id)
//     {
//         id_protected = id;    
//     }
     
//     void displayId()
//     {
//         cout << "id_protected is: " << id_protected << endl;
//     }
// };

// int main() {
     
//     Child obj1;

//     obj1.setId(81);
//     obj1.displayId();
//     return 0;
// }