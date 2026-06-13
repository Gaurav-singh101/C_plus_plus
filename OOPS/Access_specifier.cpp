// #include <iostream>
// using namespace std;

// class A {
//     public:
//         int x = 1;

//     protected:
//         int y = 2;

//     private:
//         int z = 3;
// };

// int main() {
//     A obj;

//     cout << obj.x; // ✅ Allowed
//     // cout << obj.y; // ❌ Error
//     // cout << obj.z; // ❌ Error
// }


    // 👉 What this means:
    // public → accessible everywhere
    // protected → accessible inside class + derived class
    // private → accessible only inside same class


/////////////////////////////////////////////////////////////////////////////



////        Public Inheritance


#include<iostream>
using namespace std ; 

class A{
    public:
        int x = 1 ; 
    protected:
        int y = 2 ; 
    private:
        int z = 3 ; 
};

class B : public A {
public:
    void show() {
        cout << x; // ✅ public → public
        cout << y; // ✅ protected → protected
        //cout << z;  //  ❌ private not accessible
    }
};

int main(){
    A obj1 ;
    cout<<"Accessible because of class A - x is defined as public : "<<obj1.x<<endl;
    
    //cout<<"Not Accessible because of class A - y is defined as protected : "<<obj1.y<<endl; 
                // Protected member - Only Accessible with in the class and  derived class 
    
    //cout<<obj1.z<<endl ; // Can not be access 

    B obj2 ; 

    cout<<"Accessible because of class A - x is defined as public : "<<obj2.x<<endl;  
                        // In class B also x behave like public 
    
    //cout<<"Not Accessible because of class A - y is defined as protected : "<<obj2.y<<endl; 
                // Protected member - Only Accessible with in the class and  derived class
                // It will act like protected member in derived class also ( Class - B ) 
    
    //cout<<obj1.z<<endl ; // Can not be access 

    obj2.show();
}






///****************  Star point - 
// “Access specifiers define the visibility of class members, while inheritance access specifiers 
// define how those inherited members are accessible in the derived class and from outside.”

// Simple understanding - 
// If class A has public members and class B inherits A using protected inheritance, then those public members 
// become protected in class B, while they remain public in class A.