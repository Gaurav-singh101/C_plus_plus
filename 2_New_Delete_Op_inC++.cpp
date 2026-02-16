// New and delete operator in c++ for Dynamic Memory - 
    // In C++, stack memory is automatically allocated for variables at compile time and has a fixed size. 
    // For greater control and flexibility, dynamic memory allocation on the heap is used, allowing manual 
    // allocation with new and deallocation with delete.

    // It allows the program to request memory from the heap at runtime using the new operator and release 
    // it using the delete operator. This is useful when the size of required memory isn’t known at compile time, 
    // such as for variable-sized arrays or dynamic data structures like linked lists and trees.

    // The new operator in C++ allocates memory from the Free Store (a portion of the heap). If enough memory is 
    // available, it initializes the memory with a default value based on its type and returns the address of the 
    // allocated memory


    //////////////    Example 1 -   ////////////


// #include <iostream>
// #include <memory>
// using namespace std;

// int main() {

//     // Declared a pointer to store
//     // the address of the allocated memory
//     int *nptr;
    
//     // Allocate and initialize memory
//     nptr = new int(6);

//     // Print the value
//     cout << *nptr << endl;

//     // Print the address of memory
//     // block
//     cout << nptr;
//     return 0;
// }


////////////  Example - 2   ///////////


// #include <iostream>
// using namespace std ;

// int main(){
//     int a = 10 ; 

//     int *arr = new int[a];

//     for(int i = 0 ; i < a ; i++){
//         arr[i] = i * 10;
//     }

//     cout<<arr[7]<<endl ; 

//     delete[] arr ;

//     cout<<arr[7]<<endl;

//     // Why does it sometimes print a value?

//     // The memory is not immediately overwritten

//     // The OS does not clear freed memory

//     // So the old data may still be there by chance

//     // ⚠️ But this is NOT guaranteed

//     // ❌ This is UNDEFINED BEHAVIOR

//     // Meaning:

//     // It may print the old value

//     // It may print garbage

//     // It may crash

//     // It may work today and fail tomorrow

//     // Undefined behavior = anything can happen


//     for(int i = 0 ; i < a ; i++){
//         cout<<arr[i]<<" , ";
//     }

//     return 0 ;
// }








/////////  Q - What if enough memory is not available during runtime?

// If enough memory is not available in the heap to allocate, the new request indicates failure by throwing
// an exception of type std::bad_alloc, unless "nothrow" is used with the new operator, in which case it returns 
// a nullptr pointer. Therefore, it may be a good idea to check for the pointer variable produced by the new 
// before using its program. 


// #include<iostream>
// using namespace std ;

// int main(){

//     int a = 10 ;
//     int *p = new (nothrow) int[a];
//     if (!p) {
//         cout << "Memory allocation failed\n";
//     }else{
//         cout<<"Memory Created";
//     }

//     return 0 ;
// }


////////////////////   Delete  ////////////////


#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;

    // Request memory for integer variable
    // using new operator
    ptr = new int(10);
    if (!ptr) {
        cout << "allocation of memory failed";
        exit(0);
    }

    cout << "Value of *p: " << *ptr << endl;

    // Free the value once it is used
    delete ptr;
    
    // Allocate an array
    ptr = new int[3];
    ptr[2] = 11;
    ptr[1] = 22;
    ptr[0] = 33;
    cout << "Array: ";
    for (int i = 0; i < 3; i++)
        cout << ptr[i] << " ";

    // Deallocate when done
    delete[] ptr;
    
    return 0;
}