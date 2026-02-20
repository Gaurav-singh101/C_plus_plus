// Abstraction - Hiding complex things behind the procedure that makes those sthing simple . 




#include<iostream>
using namespace std ;


class AbstractEmp{
    virtual void AskForPromotion() = 0;

};


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