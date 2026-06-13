// Inheritance is a fundamental concept in OOP (Object Oriented Programming).
// It is the mechanism by which one class is allowed to inherit the features (fields and methods) of another class.
// Inheritance means creating new classes based on existing ones. 
// A class that inherits from another class can reuse the methods and fields of that class.

//////  Basic Example of Inheritance 


// #include<iostream>
// using namespace std ; 

// class Animal{
//     public : 

//     void legs(){
//         cout<<"An Animal have four legs"<<endl;
//     }
// };

// class Dog : public Animal{  // This class inherit the property of Animal class 

// };

// class Cat : public Animal{

// };

// int main(){

//     Dog D1;

//     D1.legs();

//     Cat C1 ; 
//     C1.legs();

//     return 0 ;
// }





///////////////////  Types of inheritence ///////////////////

// Single → One parent
// Multiple → Many parents
// Multilevel → Chain
// Hierarchical → One parent, many children
// Hybrid → Mix of types



////////////     1. Single Inheritance

// One base class → one derived class

// class A { };
// class B : public A { };

// 👉 Simple parent → child relationship.


#include<iostream>
using namespace std ; 

class A{
    public: 
        int x = 2 ; 
};

class B : private A{    /// For class B - Class A will act like (public , private , protected ) as what we take 
                    /// depending upon that  , All data member and function can be access from class B  of class A
  public :  

    void setter(int m){
        this -> x = m ;
    }

    void result(){
        cout<<"Result : "<<x; 
    }
};


int main(){
    B obj1;
    obj1.setter(6);
    cout<<endl ; 
    obj1.result();
    //cout<<endl<<obj1.x; // can 

    return 0 ; 
}



////////////////           2. Multiple Inheritance

//   One derived class inherits from more than one base class

// class A { };
// class B { };
// class C : public A, public B { };



////////////////           3. Multilevel Inheritance

//  A chain of inheritance (grandparent → parent → child)

// class A { };
// class B : public A { };
// class C : public B { };


// ✅ C can access:
    // Members of B
    // Members of A (through B)
// ❌ But:
    // Private members of A are NOT accessible in B or C
    // Private members of B are NOT accessible in C



////////////////////     4. Hierarchical Inheritance

// Multiple derived classes inherit from the same base class

// class A { };
// class B : public A { };
// class C : public A { };



//////////////////       5. Hybrid Inheritance

//  A combination of two or more types of inheritance

// class A { };
// class B : public A { };
// class C : public A { };
// class D : public B, public C { };
