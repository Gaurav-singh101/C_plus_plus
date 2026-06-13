//////// namespace ////////
// Namespace is like a special container or a label that holds a group of names - like variables, functions, or classes - to avoid 
// confusion when we have the same name used in different parts of the program.

// In-built Namespaces
// C++ already uses some inbuilt namespaces that we are already familiar with. Let's look at some of the common ones:

/////   std Namespace  - 
// In C++, std namespace is the part of standard library, which contains most of the standard functions, objects, and classes like cin, 
// cout, vector, etc. It also avoids conflicts between user-defined and library-defined functions or variables.



// #include <iostream>
// using namespace std;

// int main() {
//     int a = 3, b = 7;

//     // 'cout' and 'endl' are part of the std namespace
//     cout << "Sum: " << a + b ;  
//     return 0;
// }



////  Global Namespace  -
// The global namespace is the default namespace where all the functions, variables, and classes that are not explicitly declared 
// inside any namespace. Everything outside of any namespace is considered to belong to the global namespace.
// We can access the global namespace using scope resolution operator(::) followed by global namespace name.

// Example: - 



// #include <bits/stdc++.h>
// using namespace std;

// int n = 3;

// int main() {
//     int n = 7;
    
//     // Accessing global namespace
//     cout << ::n << endl;
//     cout << n;

//     return 0;
// }




///////////   Extending Namespace - 
// In C++, extending a namespace means adding more features (like functions, variables, or classes) to an existing namespace, 
// even if that namespace was defined somewhere else (like in a library or another file).

// Example:


// #include <bits/stdc++.h>
// using namespace std;

// namespace nmsp{
//     void func(){
//         cout << "You can extend me" << endl;
//     }
// }
// // Extending the same namespace
// namespace nmsp{
//     void func2(){
//         cout << "Adding new feature";
//     }
// }
// int main() {

//     nmsp::func();
//     nmsp::func2();

//     return 0;
// }


