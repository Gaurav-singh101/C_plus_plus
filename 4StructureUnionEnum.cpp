//////// Structure  /////////

// #include<iostream>
// using namespace std ; 

// struct Student{
//     int id ; 
//     string name ; 
// };

// int main(){
    
//     Student first = {69 , "Gaurav"} ;

//     cout<<first.id<<" , "<<first.name ; 
    
//     return 0 ;
// }






///////////  Union  ////////////////




// #include <iostream>
// using namespace std;

// // Defining a Union
// union GFG {
//     int G1;
//     char G2;
//     float G3;
// };

// int main() {
    
//     // Create an object of GFG union
//     GFG Geek;
    
//     // Assign union's member variables
//     Geek.G1 = 85;
    
//     // Accessing union members values
//     cout << Geek.G1 << endl;
    
//     Geek.G2 = 'G';
//     cout << Geek.G2 << endl;
    
//     Geek.G3 = 989.45;
//     cout <<  Geek.G3;
    
//     return 0;
// }






/////////////  Enumeration (enum)  //////////////




#include <bits/stdc++.h> 
using namespace std; 

int main()  { 
    
	// Defining enum Gender 
	enum GFG { Male, Female }; 

	// Creating GFG type variable and assigning
	// value 
	GFG Geek = Male;

	switch (Geek) {
	case Male: 
		cout << "Who is he?"; 
		break; 
	case Female: 
		cout << "Who is she?"; 
		break; 
	default: 
		cout << "Who is they?"; 
	}
	
	return 0; 
}