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
    

    Animal* myAnimal = new Dog();  // Animal pointer but Dog object
    myAnimal->sound();             // Calls Dog's sound() method at runtime

    delete myAnimal;
    return 0;
}


