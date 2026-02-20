////////  Exception Handling in c++  ///////////
// Exception handling in C++ is a mechanism to detect and manage runtime errors (errors that occur during program execution) 
// in a structured way. Examples of runtime errors are.

    // 1. Division by zero
    // 2. Accessing invalid memory
    // 3. File I/O failures
    // 4. No Heap Memory  Available

// How Exception Handling Works in C++
// Instead of terminating the program abruptly when an error occurs, C++ allows you to throw exceptions and catch them for graceful handling.

// 1. Throwing an Exception: When an error or unexpected situation occurs, the program uses the throw keyword to signal an exception.
// 2. Catching an Exception: The program searches for a matching catch block to intercept and handle the thrown exception.
// 3. Handling the Exception: The catch block contains the logic to respond to the error, allowing the program to recover or terminate
//    gracefully.


///////////////   1. try-catch Block - 
// C++ provides an inbuilt feature for handling exceptions using try and catch block. It is an exception handling mechanism where the code
// that may cause an exception is placed inside the try block and the code that handles the exception is placed inside the catch block.

// Syntax - 
// try {         
//     // Code that might throw an exception
// } 
// catch (ExceptionType e) {   
//     // exception handling code
// }
// When an exception occurs in try block, the execution stops, and the control goes to the matching catch block for handling.

//Example - 

// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <stdexcept>
// using namespace std;

// int main() {

//     vector<int> arr = {3, 4, 5, 7};

//     try {
//         cout << "Element is - " << arr.at(6);
//     }
//     catch (out_of_range& e) {
//         cout << "Out of range error: " << e.what();
//     }
//     catch (logic_error& e) {
//         cout << "Logic error: " << e.what();
//     }
//     catch (runtime_error& e) {
//         cout << "Runtime error: " << e.what();
//     }
//     catch (...) {
//         cout << "Unknown error";
//     }

//     return 0;
// }



/////////////////////   2. Throwing Exceptions - 
// Throwing exception means returning some kind of value that represent the exception from the try block. The matching catch block 
// is found using the type of the thrown value. The throw keyword is used to throw the exception.

// Syntax - 
// try {         
//     throw val
// } 
// catch (ExceptionType e) {   
//     // exception handling code
// }


// There are three types of values that can be thrown as an exception:
// Built-in Types
// Standard Exceptions
// Custom Exceptions


/////   Throwing Built-in Types - 

// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){
//     int a = 10 , b = 0 ; 

//     try{
//         if(b == 0){
//             throw -1 ;
//         }
//         cout<<a / b ;
//     }
//     catch (int e) {
//         cout << "Exception caught: Division by zero (code " << e << ")";
//     }

//     return 0 ;
// }


//////////  Standard Exceptions - 
// Standard exceptions are the set of classes that represent different types of common exceptions. All these classes are defined 
// inside <stdexcept> header file and mainly derived from std::exception class which act as the base class for inbuilt exceptions. 


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3};
    
//     try {
//         // Accessing out of bound element
//         v.at(10);
//     }
//     catch (out_of_range e) {
//         cout << "Caught: " << e.what();
//     }
//     return 0;
// }





/////////   Custom Exceptions - 
// When the standard exceptions cannot satisfy our requirement, we can create a custom exception class. It is recommended to inherit 
// standard exception in this class to provide seamless integrity with library components though, it is not compulsory.




// #include<bits/stdc++.h>
// using namespace std ; 

// // Custom exception class    // : - inhertance symbol  // public exception - class inherits from C++ standard exception class 
// class NegativeValueException : public exception {
//     private: 
//         int value ;
    
//     public:    
//         // Constructor  // int val → value passed when exception is thrown  // : value(val) → initializer list  , Assigns val to value  // {} - Empty body 
//         NegativeValueException(int val) : value(val) {}

//         // Override what() method 


//         // const char* → returns a string (C-style)
//         // what() → standard function used to describe exception
//         // const → function does not modify object data
//         // noexcept → promises this function will NOT throw exceptions
//         // override → confirms this function overrides base class method

//         const char* what() const noexcept override{
//             return "Negative value error Occured !";
//         }


//         // method to get the invalid value
//         int getValue() const {
//             return value;
//         }
// };


// void checkVal(int n){
//     if(n < 0){
//         throw NegativeValueException(n);
//     }else{
//         cout<< "Value is "<< n << endl ;
//     }
// }

// int main(){

//     vector<int> arr = {3 , 5 , 6 , -5 , 0 , -8};

//     for(int n : arr){
//         try{
//             checkVal(n);
//         }catch(NegativeValueException &e){
//             cout<<" Exception Caught : "<<e.what()
//                 <<" Val = "<<e.getValue()<< endl ;

//         }
//     }

//     return 0 ;
// }


//////// Flow if any value is negative - 

// main()
//   |
//   |--> n = -5
//   |
//   |--> try
//         |
//         |--> checkValue(-5)
//                |
//                |--> if (x < 0)
//                |
//                |--> throw NegativeValueException(-5)
//                         |
//                         |--> constructor stores value = -5
//                         |
//                         |--> jump to catch
//                                 |
//                                 |--> e.what()
//                                 |
//                                 |--> e.getValue()







// #include<bits/stdc++.h>
// using namespace std ; 

// class handleEx : public exception {
//     private : 
//         int age ;
//     public : 
//         handleEx(int Age){
//             this -> age = Age ;
//         }

//         const char* what() const noexcept override {
//             if(age <= 5){
//                 return "Bachha h abhi";
//             }else if(age < 10 && age > 5){
//                 return "Smjhdar ho gya h";
//             }else{
//                 return "Bda ho gya h";
//             }
//         }
// };

// int main(){

//     for(int i = 0 ; i < 10 ; i++){
//         int age ; 
//         cout<<"Enter your age : "; 
//         cin>>age ; 

//         try{
//             if(age < 18){
//                 throw handleEx(age);
//             }
//             cout<<"Adult ho"<<endl ;
//         }catch(handleEx & e){
//             cout<<"Exception caught: "<<e.what()<<endl; 
//         }
//     }

//     return 0 ;
// }