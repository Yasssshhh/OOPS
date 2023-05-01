Abstraction is the process of only showing the necessary details to the user and hiding the other details in the background. 

Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will increase the speed 
of the car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually 
increasing, he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car.
This is what abstraction is.

Types of Abstraction:
Data abstraction – This type only shows the required information about the data and hides the unnecessary data.
Control Abstraction – This type only shows the required information about the implementation and hides unnecessary information.

1:Abstraction using Classes

We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available 
access specifiers. A Class can decide which data member will be visible to the outside world and which is not. 

2:Abstraction in Header files

One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. 
Whenever we need to calculate the power of a number, we simply call the function pow() present in the math.h header file and pass 
the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power 
of numbers.


3:Abstraction using Access Specifiers

Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on 
class members. For example:

Members declared as public in a class can be accessed from anywhere in the program.
Members declared as private in a class, can be accessed only from within the class. 
They are not allowed to be accessed from any part of the code outside the class.


"Advantages of Data Abstraction"

Helps the user to avoid writing the low-level code
Avoids code duplication and increases reusability.
Can change the internal implementation of the class independently without affecting the user.
Helps to increase the security of an application or program as only important details are provided to the user.
It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.