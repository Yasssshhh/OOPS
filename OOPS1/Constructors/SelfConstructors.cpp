//Self constructor
//Let's create some constructors.

// class Student{

//   public:
//   int rollNo;
//   string name;
//   string place;

//   private:
//   int age;
//   int sex;

//   public:
//   void display(){
//     cout<<"Age is : "<<age<<" ";
//     cout<<"RollNo is : "<<rollNo;
//   }

//   //Default constructor
//   Student(){
//     cout<<"Default constructor is called !"<<endl;
//   }

//   //Paramaterised constructor
//   Student(int r,int a){
//     rollNo=r;
//     age=a;
//     cout<<"Paramaterised constructor is called"<<endl;
//   }

//   Student(string name,string place){
//     this->name=name;
//     this->place=place;
//     cout<<"Paramaterised constructor 2 is called"<<endl;
//   }

//   void display2(){
//     cout<<"Name is : "<<name<<" ";
//     cout<<"Place is : "<<place;
//   }

// };

// int main(){
//     Student S1;
//     Student S2;

//     S1.rollNo=21;
//     S1.display();
//     cout<<endl;

//     S2.display();
//     cout<<endl;

//     Student S3(40,20);

//     // //Copy constructor
//     // Student S4(S3);

//     // //Copy Assignment Operator
//     // Student S5=S3;

//     // Student S6(200,300);
//     // // Student S6(S3);//Error 'Student S6' previously declared here
//     // // S6(S3); Error
//     S3.display();
//     cout<<endl;
//     // S4.display();
//     // cout<<endl;
//     // S5.display();
//     // cout<<endl;
//     // S6.display();
  
//     Student S7("Yash","Delhi");
//     S7.display2();

// }




// This keyword (Every object can access its own object using a special keyword called this).
// this keyword holds address of current object,it is a pointer variable

// class Student{

//   public:
//   int rollNo;

//   private:
//   int age;

//   public:
//   ~Student(){
//   cout<<"Destructor Called"<<endl;  
//   }

//   Student(int rollNo){
//     cout<<"Constructor 2 Called"<<endl;
//     this->rollNo=rollNo;
//   }

//   Student(int a,int rollNo){
//   cout<<"constructor 3 Called"<<endl;
//   //writing this->age is optional as age and a are easily seperatable but we can see that rollNo of class and perimeter is same so we 
//   // have to use this keyword.
//   this->age=a;
//   this->rollNo=rollNo;
//   }

//   public:
//   void display(){
//     cout<<"Age is : "<<age<<" ";
//     cout<<"RollNo is : "<<rollNo;
//   }

// };


// int main(){

//   Student s1(10,101);
//   Student s2(20,201);

//   Student*s3=new Student(30,3001);

//   s2=s1;
//   *s3=s1;
//   s2=*s3;

//   delete s3;

// }

// constructor 3 Called
// constructor 3 Called
// constructor 3 Called
// Destructor Called   
// Destructor Called   
// Destructor Called 


//If you will try to make destructor a private funcion, first error will be thrown by delete s3, and then this,
// 'Student::~Student()' is private within this context


