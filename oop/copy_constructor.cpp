#include<bits/stdc++.h>
using namespace std ;

class Person{
    public:
    string name;
    int age;

    //Normal Constructor 
    Person(string n , int a){
        name = n;
        age = a;

    }

    //copy constructor check the argument 
    /*Person(const Person& other){
        name=other.name;
        age=other.age;
        cout<<"Copy constructor called"<<endl;

    }*/
     void display(){
        cout<<name<<" "<<age<<endl;

     }


};
/*
class DynamicPerson {
public:
    string name;
    int* agePointer; // Raw pointer!

    DynamicPerson(string n, int a) {
        name = n;
        agePointer = new int(a); // Dynamically allocated memory
    }

    // REQUIRED Custom Copy Constructor (Deep Copy)
    DynamicPerson(const DynamicPerson& other) {
        name = other.name;
        // Allocate NEW memory for the clone, then copy the value
        agePointer = new int(*(other.agePointer)); 
    }

    ~DynamicPerson() {
        delete agePointer; // Cleanup
    }
};
*/

int main(){
    Person p1("Alex",25);
    
    
    //cloning using constructors 
    Person p2(p1); //we are invoking the copy constructor
    Person p3 = p1 ; //invokes copy constructor 

    p2.name = "Kislay";
    p3.name = "Heema";

    p1.display();
    p2.display();
    p3.display();

    return 0 ;

}
//In this running code it's shallow code we'll need deep code to work with pointers