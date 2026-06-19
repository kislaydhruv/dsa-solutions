#include <bits/stdc++.h>
using namespace std;

// Parent class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Child class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Main function
int main() {
    Dog dog;
    dog.sound();
    //delete dog; is wrong it will throw error here we are using the stack only 
    // Well this is compile time polymorphism 


    // Runtime polymorphism 
    //Anything that comes from out of the code
    //File/database reads
    //User input 
    //Netwrok Responses 
    //System Clock
    // Random Numbers
    // happens in runtime 
    // so thats why runtime polymorphism is important 
    
    Animal* myAnimal = new Dog();  // Animal pointer but Dog object
    myAnimal->sound();             // Calls Dog's sound() method at runtime

    delete myAnimal;
    return 0;
}


