// In C++, encapsulation is an Object-Oriented Programming (OOP) concept that involves bundling the data (variables) and the 
// functions (methods) that operate on that data into a single unit, which is a class. The primary purpose is to protect the 
// internal state of an object from unauthorized access or misuse by external code, a concept also known as data hiding. 

// Key Concepts
// Bundling: Encapsulation combines related data and behaviors within a class, creating a self-contained module.

// Data Hiding: By making data members private (using the private access specifier), they cannot be accessed directly from outside the 
//     class, ensuring data integrity and security.

// Controlled Access: public member functions (commonly called getters and setters) provide a defined interface for interacting with 
//     the private data. These methods can include validation logic to ensure that only valid data is assigned to the private variables. 



#include<iostream>
using namespace std ;

class Employee{

private:
// Now these three properties is not access by outside the class 
    string Name ;
    string Company ;
    int Age ;

public:

    // getter and setter method for access private properties , so other class can access these properties 

    void setName(string name){
        Name = name ;
    }

    string getName(){
        return Name ;
    }

    void setCompany(string company){
        Company = company ;
    }

    string getCompany(){
        return Company ;
    }

    void setAge(int age){
        if(age >= 18)   // Validation rule for set age 
            Age = age ;
    }

    int getAge(){
        return Age ;
    }

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

    E1.setAge(15);

    cout<<E1.getName()<<" is "<<E1.getAge()<<" years Old."<<endl ;
    E1.IntroYourself();


    return 0 ;
}