#include<bits/stdc++.h>
using namespace std;

class Employee {
    string name;
    int salary;

public:
    Employee() {
        name = "Unknown";
        salary = 0;
    }

    Employee(string n) {
        name = n;
        salary = 0;
    }

    Employee(string n, int s) {
        name = n;
        salary = s;
    }
};

class Employee1 {
    string name;
    int salary;

public:
    // Main constructor
    Employee1(string n, int s) {
        name = n;
        salary = s;
    }

    // Constructor chaining
    Employee1(string n) : Employee1(n, 0) {}

    // Constructor chaining
    Employee1() : Employee1("Unknown", 0) {}
};