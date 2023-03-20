// Getters and Setters
// If you want others to read or modify the value of a private member, you can provide public get and set methods.

// class Student{

//   public:
//   int rollNo;

//   private:
//   int age;
//   int sex;

//   public:
//   void display(){
//     cout<<"Age is"<<age;
//     cout<<"RollNo is"<<rollNo;
//   }

//   int getage(){
//     return age;
//   }
//   int setAge(int a){
//     age=a;
//   }
// };

// int main(){
//     Student S1;
//     Student S2;

//     S1.rollNo=21;

//     cout<<"S1 age:"<<S1.getage()<<endl;
//     cout<<"RollNo:"<<S1.rollNo<<endl;
    
//     S1.setAge(20);
//     cout<<endl;

//     S2.setAge(30);
//     cout<<endl;

//     S1.display();

//     S2.display();

// }

// S1 age:6422352
// RollNo:21


// Age is20RollNo is21
// Age is30RollNo is-2


//Getters and setters are very important in real world.
//If you want to add age, but with a constraint that age cannot be negative, you can put a constraint that if age no is less than
// 0,return(i.e do not update age parameter).