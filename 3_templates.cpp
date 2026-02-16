////////   Template in c++ //////////////

// A C++ template is a tool for creating generic classes or functions. This allows us to write code that works for any data type 
// without rewriting it for each type.

// Avoid code duplication by allowing one function or class to work with multiple data types, mainly allowing generic functions and classes.
// Provides type safety unlike void* pointers or macros, and can be specialized for specific data types when needed.


///////// Example //////////

// #include<iostream>
// using namespace std ;

// template<typename T>
// T mymax(T x , T y){
//     return (x > y) ? x : y ;
// }

// int main(){

//     cout<<"Max in (10 , 100) : "<<mymax<int>(10 , 100)<<endl ;
//     cout<<"Max in (10.20 , 100.49) : "<<mymax<double>(10.20 , 100.49)<<endl ;
//     cout<<"Max in (e , v) : "<<mymax<char>('e' , 'v')<<endl ;

//     return 0 ;
// }


/////////   Example  //////////
// #include <bits/stdc++.h>
// using namespace std;

// template <class T>
// class MyVector {
// public:
//     T *arr;
//     int size;

//     MyVector(int m) {
//         size = m;
//         arr = new T[size];
//     }

//     T dotProduct(MyVector &v) {
//         T d = 0;
//         for(int i = 0; i < size; i++) {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }

//     ~MyVector() {
//         delete[] arr;   // prevent memory leak
//     }
// };

// int main() {
//     MyVector <float>v1(3);
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;

//     MyVector <float>v2(3);
//     v2.arr[0] = 1.8;
//     v2.arr[1] = 0;
//     v2.arr[2] = 4.3;

//     float a = v1.dotProduct(v2);
//     cout << a << endl;

//     return 0;
// }






//////////   same class template with 2 parameters    //////////




// #include <bits/stdc++.h>
// using namespace std;

// template <class T, class U>
// class MyVector {
// public:
//     T *arr1;
//     U *arr2;
//     int size;

//     MyVector(int m) {
//         size = m;
//         arr1 = new T[size];
//         arr2 = new U[size];
//     }

//     auto dotProduct() {
//         auto d = 0.0;
//         for(int i = 0; i < size; i++) {
//             d += arr1[i] * arr2[i];
//         }
//         return d;
//     }

//     ~MyVector() {
//         delete[] arr1;
//         delete[] arr2;
//     }
// };

// int main() {
//     MyVector<int, float> v(3);

//     v.arr1[0] = 4;
//     v.arr1[1] = 3;
//     v.arr1[2] = 1;

//     v.arr2[0] = 1.8;
//     v.arr2[1] = 0;
//     v.arr2[2] = 4.3;

//     cout << v.dotProduct() << endl;

//     return 0;
// }


///////////////    Templates can be used to define:-
                // Function Templates
                // Class Templates
                // Variable Templates (C++14 onwards)


// Function Templates - 
    // In C++, templates allow us to write generic code for functions that can be used with different data types, 
    //and this can be achieved by function templates.



// #include <iostream>
// using namespace std;

// template <typename T> 
// T myMax(T x, T y){
//     return (x > y) ? x : y;
// }

// int main(){

//     cout << myMax<int>(3, 7) << endl;
//     cout << myMax<double>(3.0, 7.0) << endl;
//     cout << myMax<char>('g', 'e');
//     return 0;
// }


//////////  / Class Templates -
    // Class templates like function templates, are useful when a class defines something that is independent of the
    // data type. It is useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.


// #include<iostream>
// using namespace std ;

// template<typename T1 , typename T2>
// class calcu{
//     private : 
//     T1 A ; 
//     T2 B ; 
//     public :

//     calcu(T1 x , T2 y) : A(x) , B(y) {}

//     auto add(){
//         return A + B;
//     }

//     auto multi(){
//         return A * B ;
//     }

//     auto subs(){
//         return A - B ;
//     }

// };

// int main(){

//     calcu<int , int> S(4 , 5); 
//     cout<<S.add()<<endl ;
//     cout<<S.multi()<<endl ;
//     cout<<S.subs()<<endl ;

//     return 0;
// }







//////////   Template Variables (Since C++ 14) -
        // A template variable is a variable that can work with any type specified when the variable is used, 
        // similar to how we use templates for functions or classes.

#include <iostream>
using namespace std;

template <typename T> constexpr T pi = T(3.14159);

int main(){
    cout << "Pi as float: " << pi<float> << endl;
    cout << "Pi as double: " << pi<double>;
    return 0;
}


    //In the above statement, pi is the template variable. We use constexpr with the template variable 
    //because it ensures that the variable is a constant expression and is evaluated at compile time 
    //rather than at runtime.