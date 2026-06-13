// Encapsulation is one of the core concepts of Object Oriented Programming (OOP).
// The idea of encapsulation is to bind the data members and methods into a single unit. .
// Helps in better maintainability, readability and usability as we do not need to explicitly 
// pass data members to member methods


// Implementation of Encapsulation in C++

// Declare variables as private: Keep the class data members private so that they cannot be 
//                               accessed directly from outside the class. This ensures data hiding.

// Use getters and setters: Provide public functions (getters and setters) to access and modify 
//                          private variables safely. These methods can also include validation 
//                          to ensure only valid data is assigned.

// Apply proper access specifiers: Use private for data members to hide information and public for member 
//                                 functions that provide controlled access to the data.




// #include<bits/stdc++.h>
// using namespace std ; 

// class bank{
//     private:
//     double balance ; 

//     public: 

//     void setter(double amt){
//         balance += amt ; 
//     }

//     void getter(double amt){
//         if(balance - amt >= 0){
//             balance -= amt ; 
//         }
//     }

//     void help(){
//         cout<<"Available amount : "<<balance<<endl; 
//     }
// };

// int main(){

//     bank b1 ; 
//     b1.setter(1000);
//     b1.help() ;
//     b1.getter(500);
//     b1.help(); 

//     bank b2 ; 
//     b2.setter(9000);
//     b2.help() ; 


//     return 0;
// }