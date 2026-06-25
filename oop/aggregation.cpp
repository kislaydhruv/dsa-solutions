#include <bits/stdc++.h>
using namespace std;

// Employee Class
class Employee {
private:
    string name;

public:
    Employee(string name) {
        this->name = name;
    }
    
    // Adding a quick getter so we can actually print the names later!
    string getName() {
        return name;
    }
};

// Department Class
class Department {
private:
    vector<Employee> employees;

public:
    Department(vector<Employee> employees) {
        this->employees = employees;
    }
    
    // Adding a display method to show the relationship in action
    void showTeam() {
        cout << "Department Roster:\n";
        for (Employee emp : employees) {
            cout << "- " << emp.getName() << "\n";
        }
    }
};

int main() {
    // 1. Create independent Employee objects
    Employee emp1("Alice");
    Employee emp2("Bob");
    Employee emp3("Charlie");

    // 2. Put our User-Defined Types into an inbuilt C++ vector
    vector<Employee> techTeam = {emp1, emp2, emp3};

    // 3. Create the Department and pass the vector of employees into it
    Department engineering(techTeam);

    // 4. Prove that the Department successfully "Has" the Employees
    engineering.showTeam();

    return 0;
}