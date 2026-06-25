#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor (used internally by clone)
    Person(const Person& other) {
        name = other.name;
        age = other.age;
    }

    // Custom clone method
    Person* clone() const {
        return new Person(*this); // uses copy constructor
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {

    Person p1("Alex", 25);

    // Cloning using custom clone()
    Person* p2 = p1.clone();

    p2->name = "David";

    p1.display();
    p2->display();

    delete p2; // free allocated memory

    return 0;
}