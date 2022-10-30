// Copy constructor and copy assignment operator.


//Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
//Copy assignment operator is used when both objects are already present in memory.

// class Student{

//   public:
//   int rollNo;

//   private:
//   int age;

//   public:
//   Student(int rollNo){
//     cout<<"Constructor 2 called"<<endl;
//     this->rollNo=rollNo;
//   }

//   Student(int a,int r){
//     cout<<"this:"<<this<<endl;
//     cout<<"Constructor 3 called"<<endl;
//     this->age=a;
//     this->rollNo=r;
//   }

//   public:
//   void display(){
//     cout<<"Age is : "<<age<<" ";
//     cout<<"RollNo is : "<<rollNo;
//   }

// };

// int main(){
//   Student S1(10,101);
//   cout<<"S1:";
//   S1.display();

//   //No constructor will be called for this as  for this copy constructor is called which is not created by us.
//   Student S2(S1);
//   cout<<"S2:";
//   S2.display();

//   Student*S3=new Student(20,2001);
//   cout<<"S3:";
//   S3->display();

// //No constructor will be called for this as  for this copy constructor is called which is not created by us.
//   Student S4(*S3);
//   Student*s5=new Student(*S3);
//   Student*s6=new Student(S1);

// }

// this:0x61feec
// Constructor 3 called
// S1:Age is : 10 RollNo is : 101S1:Age is : 10 RollNo is : 101this:0x1006e78
// Constructor 3 called
// S3:Age is : 20 RollNo is : 2001



