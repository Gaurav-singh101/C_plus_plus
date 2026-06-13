// Before Object-Oriented Programming (OOPs), most programs used a procedural approach, 
// where the focus was on writing step-by-step functions. 
// This made it harder to manage and reuse code in large applications.

// OOP in C++ was introduced to solve this problem by organizing code into classes and objects, 
// making programs easier to understand, reuse, and maintain.

// Structures code into logical units (classes and objects)
// Keeps related data and methods together (encapsulation)
// Makes code modular, reusable and scalable
// Prevents unauthorized access to data
// Follows the DRY (Don't Repeat Yourself) principle

////////////   Class   /////////////////

// A class is a user-defined blueprint or prototype from which objects are created. 
// It represents the set of properties or methods that are common to all objects of one type. 
// Using classes, you can create multiple objects with the same behavior instead of
// writing their code multiple times. In general, class declarations in C++ can include these components.

//   Access Specifiers: A class can have members defined as public, private, or protected to control accessibility.
//   Class Name: The class name should follow naming conventions, usually starting with a capital letter.
//   Body: The class body is enclosed with braces {} and defines data members and member functions.

// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll_Num;

//     void print()
//     {
//         cout << "Name : " << name;
//     }
// };

// int main()
// {

//     Student S1, S2;
//     S1.name = "Gaurav Singh";
//     S1.roll_Num = 158;

//     S1.print();
//     cout << endl;
//     cout << "Roll Number : " << S1.roll_Num;
//     cout << endl;
//     try
//     {
//         if (S2.roll_Num > 200)
//             throw -1;

//         cout << "Roll Number : " << S2.roll_Num;
//     }
//     catch (int e)
//     {
//         cout << "Roll nubmer not found";
//     }

//     return 0;
// }







////////////////  Object   /////////////


// Object
// An Object is a basic unit of Object-Oriented Programming that represents real-life entities.
// A typical C++ program creates many objects, which interact with each other by invoking methods.
// The objects are what perform your code, they are the part of your 
// code visible to the user. An object mainly consists of:

// State: It is represented by the data members (attributes) of an object. 
//         It also reflects the properties of an object.
// Member Function: A member function is a collection of statements that perform some specific task 
//                  and may return the result to the caller.
// Behavior: It is represented by the member functions of an object. It also reflects the 
//            response of an object to other objects.
// Identity: It is a unique name or reference given to an object that enables it to interact with other objects.



// Constructor → initial value
// Setter → update/change value later


////////////////////////////////////////
// If no constructor is defined, C++ automatically provides a default constructor
// If you define any constructor, the compiler does NOT generate a default one automatically
// So:
// No constructor → object can be created without values ✅
// Only parameterized constructor → values are required ❗
/////////////////////////////////////////


// #include<iostream>
// using namespace std ; 

// class Student{
//     private : 
//     string name ; 
//     int roll_num ;

//     public :

//     Student(string Name , int Roll_num){
//         this-> name = Name ; 
//         this-> roll_num = Roll_num ; 
//     }

//     void set_Name(string name){
//         this -> name = name ;
//     }

//     void set_Rollnumber(int roll){
//         this -> roll_num = roll ;
//     }

//     string get_Name(){
//         return name ;
//     }

//     int get_RollNumber(){
//         return roll_num ;
//     }


//     void registration_done(){
//         cout<<"Registration is done for the student - "<<name<<"  Roll Number is - "<<roll_num;
//     }

// };


// int main(){

//     Student s1("Gaurav" , 158); 
//     s1.set_Name("Anshika");

//     s1.registration_done();

//     cout<<endl<<"Name : "<<s1.get_Name();


//     return 0 ;
// }



