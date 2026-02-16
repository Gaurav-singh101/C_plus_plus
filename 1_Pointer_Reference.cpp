/////////////  Pointer ////////////

// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10 ; 
//     int *ptr ; 
//     ptr = &x ;

//     cout<<"Address of x : "<<ptr<<endl ; 
//     cout<<"Value at that pointer : "<<*ptr<<endl ;

//     return 0 ;
// }




/////////// Reference /////////




#include <iostream>
using namespace std;

int main(){
    int x = 10 ; 
    int &ref = x ;

    cout<<"Address of x : "<<ref<<endl ; 
    cout<<"Value at that reference  : "<<ref + 10<<endl ;
    ref += 20 ;
    cout<<"Address of X : "<<x<<endl ;

    return 0 ;
}