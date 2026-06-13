/////////////  Pointer ////////////
// Pointer - is a variable that store the address of another variable . 
// The * tells the compiler that ptr is a pointer variable, and it will store the address of an 
// int variable, not an actual integer value.

// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10 ; 
//     int *ptr ; 
//     ptr = &x ;    //  & - Address of operater 
  
//     cout<<"Address of x : "<<ptr<<endl ; 
//     cout<<"Value at that pointer : "<<*ptr<<endl ;   

//     return 0 ;
// }



/////////// Reference /////////
// A reference is an alias (another name) for a variable.
// 🔹 Properties
// Must be initialized
// Cannot be NULL
// Cannot be reassigned
// Works like original variable



// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10 ; 
//     int &ref = x ;

//     cout<<"ref - refers the x (Same name for x) : "<<ref<<endl ; 
//     cout<<"Value of x will change if we make change with ref : "<<ref + 10<<endl ;
//     ref += 20 ;
//     cout<<"Vlaue of X  is changed : "<<x<<endl ;

//     int *ptr1 = &ref ; 
//     int *ptr2 = &x ;

//     cout<<"Address of x : "<<ptr1<<endl ; 
//     cout<<"Address of ref : "<<ptr2<<endl ; 

//     cout<<"Value a x : "<<*ptr2<<endl ; 
//     cout<<"Value a ref : "<<*ptr1<<endl ; 

//     return 0 ;
// }


//////////////    Question to practic  /////////////////
////////////////////////////////////////////////////////


// int arr[] = {10,20,30};
// int *p = arr;

// cout << *p;       // 10
// cout << *(p+1);   // 20


//////////////////////////////////////////////////////


// int *p;
// {
//     int x = 10;
//     p = &x;
// }
// // x destroyed → p is dangling
// // 👉 A dangling pointer is a pointer that points to a memory location that is no longer valid.

//////////////////////////////////////////////////////


// 👉 A wild pointer is a pointer that is declared but NOT initialized.
// int *p;   // not initialized  // Wild Pointer 

// 💡 Fix (Best Practice)
// ✔️ Initialize pointer
// int *p = nullptr;


/////////////////////////////////////////////////////


// 👉 A void pointer is a pointer that can store the address of any data type.
// void *p;
// int a = 10;
// p = &a;

// 🔴 Example
// int a = 10;
// void *p = &a;
// 👉 This is valid ✅


// ❌ But this is NOT allowed:
// cout << *p;   // ❌ ERROR
// 👉 Because compiler doesn’t know the type

// ✅ Solution: Typecasting
// cout << *(int*)p;       // 10


///////////////////////////////////////////////////


// int add(int a, int b) {
//     return a + b;
// }
// int (*fptr)(int, int) = add;
// cout << fptr(2,3);   // 5




////////////////////////////////////////////////




// int a = 10;
// int &ref = a;

// int b = 20;
// ref = b;

// cout << a;

// 👉 Output: 20
// ❗ ref still refers to a, not b
// 👉 Reference cannot change what it refers to
// 👉 But it can change the value of that variable



////////////////////////////////////////////////




// int arr[] = {1,2,3};
// int *p = arr;

// cout << *(p+2);

// 👉 Output: 3



///////////////////////////////////////////////




// int a = 10;
// int *p = &a;
// int **pp = &p;

// cout << **pp;

// 👉 Output: 10




///////////////////////////////////////////////    




// int a = 10;
// int *p = &a;

// cout << *p++;

// 👉 Output: 10

// ❗ Explanation:

// *p++ = *(p++)

// first use pointer, then move




///////////////////////////////////////////////




// Swap (Important)

// ❌ Wrong
// void swap(int a, int b) {
//     int t = a;
//     a = b;
//     b = t;
// }


// ✅ Using Pointer
// void swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }


// ✅ Using Reference
// void swap(int &a, int &b) {
//     int t = a;
//     a = b;
//     b = t;
// }




////////////////////////////////////////////////////



// NULL pointer danger

// int *p = NULL;
// cout << *p;

// 👉 ❌ Runtime Error (Segmentation Fault)




///////////////////////////////////////////////////  



// Reference Trick
// int a = 10;
// int &r = a;

// r++;
// cout << a;

// 👉 Output: 11





#include <iostream>
using namespace std;

int main() {
    
    int a = 10;                 // normal integer variable
    int *p = &a;                // pointer p stores address of a

    cout << *p++ << endl;       
    // *p++ = *(p++)
    // Step 1: print value at p → 10
    // Step 2: increment pointer → now p points to next memory (NOT valid for single variable)

    cout << "Memory location : " << p << endl;  
    // prints new address (after a) → NOT the address of a anymore

    cout << *(p++) << endl;     
    // same as *(p++)
    // Step 1: try to access value at current p → INVALID memory ❌
    // Step 2: increment pointer again
    // Output → garbage / undefined behavior

    cout << "Memory location : " << p << endl; 
    // pointer moved again → prints next memory address

    cout << (*p++) << endl;     
    // same as *(p++)
    // again accessing invalid memory ❌
    // then pointer increments
    // Output → garbage

    cout << "Memory location : " << p << endl;
    // pointer moves further

    cout << (*p)++ << endl;     
    // (*p)++ means:
    // Step 1: print value at p (INVALID memory ❌)
    // Step 2: increment that value (not pointer)
    // pointer DOES NOT move here

    cout << "Memory location : " << p << endl;
    // pointer remains SAME as previous step

    cout << *(p)++ << endl;     
    // *(p)++ = *(p++)
    // Step 1: access invalid memory ❌
    // Step 2: increment pointer

    cout << "Memory location : " << p << endl;
    // pointer moved again

    return 0;
}