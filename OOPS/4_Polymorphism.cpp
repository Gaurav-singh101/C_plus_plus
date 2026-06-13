// The word polymorphism means having many forms. In C++, polymorphism concept 
// can be applied to functions and operators. A single function name can work differently 
// in different situations. Similarly, an operator works different when used in different context.

// 1. Compile-Time Polymorphism
// Also known as early binding and static polymorphism, in compile-time polymorphism, the compiler 
// determines how the function or operator will work depending on the context. 
// This type of polymorphism is achieved by function overloading or operator overloading.

// A. Function Overloading
// Function overloading is a feature of object-oriented programming where two or more functions 
// can have the same name but behave differently for different parameters. 
// Such functions are said to be overloaded; hence, this is known as Function Overloading. 
// Functions can be overloaded either by changing the number of arguments or changing the type of arguments.


// #include<bits/stdc++.h>
// using namespace std ; 

// class add{
//     public : 
//     int sum(int a , int b){
//         return a + b ;
//     }

//     double sum(double a , double b){
//         return a + b ;
//     }
// };


// int main(){

//     add s1 ; 
//     cout<<s1.sum(5 , 4)<<endl;

//     add s2 ; 
//     cout<<s2.sum(2.2 , 3.2);



//     return 0 ;
// }






// B. Operator Overloading
// C++ has the ability to provide the operators with a special meaning for particular data type, 
// this ability is known as operator overloading. For example, we can make use of the addition operator 
// (+) for string to concatenate two strings and for integer to add two integers.



// #include<bits/stdc++.h>
// using namespace std;

// class Number {
// public:
//     int value;

//     // Constructor
//     Number(int v) {
//         value = v;
//     }

//     // Operator overloading
//     Number operator + (Number obj) {
//         Number temp(0);
//         temp.value = this->value + obj.value;
//         return temp;
//     }

    
// // 👉 This is the **heart of operator overloading**

// // - `operator +` → we are redefining `+`
// // - `Number obj` → the second operand

// // ---

// // ### 💡 Important understanding

// // When you write:
// // ```cpp
// // n1 + n2


// };

// int main() {

//     Number n1(10), n2(20);

//     Number n3 = n1 + n2;

//     cout << "Result: " << n3.value << endl;

//     return 0;
// }






// 2. Runtime Polymorphism
// The decision of which function to call is made at runtime (during execution), not at compile time.
// Same function name → different behavior depending on object type at runtime


// #include<bits/stdc++.h>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() {
//         cout << "Animal makes sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {

//     Animal* a;   // base class pointer

//     Dog d;
//     Cat c;

//     a = &d;
//     a->sound();   // Dog barks

//     a = &c;
//     a->sound();   // Cat meows

//     return 0;
// }








// 🔍 What’s happening here?
// This line:
// Animal* a;

// 👉 Pointer of base class

// Then:
// a = &d;
// a->sound();

// 👉 Even though pointer is Animal,
// 👉 it calls Dog’s version of sound()

// Why??

// Because of:

// virtual void sound()

// 👉 This tells compiler:

// “Don’t decide now, decide at runtime”

// 🧩 Without virtual (important contrast)

// If you remove virtual:

// a->sound();

// 👉 Always calls:

// Animal makes sound

// ❌ No polymorphism