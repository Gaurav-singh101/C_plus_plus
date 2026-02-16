#include<iostream>
using namespace std ;


class Employee{
    // Access Modifier - Public , Private , Protected 
    //  Private - Can not be access outside the class 
    // Public - Access from anywhere 
    // Protected - In between Public and private 

    public :
    string Name ;
    string Company ;
    int Age ;

    // Function 
    void IntroYourself(){
        cout<<"Name - "<<Name<<endl; 
        cout<<"Company  - "<<Company<<endl; 
        cout<<"Age - "<<Age<<endl; 
    }

    Employee(string name , string company , int age){ // Create constructor - has same name as class name and there is no return type 
        Name = name ; 
        Company = company ; 
        Age = age ;
    }
};

int main(){

    Employee E1 = Employee("Gaurav" , "Amazon" , 25);
    E1.IntroYourself();

    // E1.Name = "Gaurav";
    // E1.Company = "Youtude";
    // E1.Age = 25;


    return 0 ;
}