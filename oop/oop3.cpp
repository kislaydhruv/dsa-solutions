#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    string employeeName;
    //constructor
    Employee(){
        employeeName = "Kislay";
        salary=5000;

    }
    //method to the set the employee name as given input 
    void setName(string s){
        employeeName = s;

    }
    //Method to set the salary of the given employee
    void setSalary(int salary){
        this->salary = salary;

    }
    //Method to get the salary of the employee 
    int getSalary(){
        return salary ;

    }
};
class Employee1{
    public:
    int id;
    double salary;
    string name;

};
class P_Employee{
    public:
    string employeeName;
    int salary;
    //parameterized constructor
    P_Employee(string name , int salary){
        this->employeeName = name;
        this->salary = salary;
    }

};
class C_Employee{
    public:
    string employeeName;
    int salary;
    //constructor 
    C_Employee(string name , int salary ){
        this->employeeName = name;
        this->salary = salary;
    }
    C_Employee(const C_Employee &other){
        this->employeeName = other.employeeName;
        this->salary = other.salary;
    }

};




int main (){
    Employee obj1;
    cout<<"Employee Name: "<<obj1.employeeName<<endl;
    cout<<"Employee Salary: "<<obj1.getSalary()<<endl;
    obj1.setName("John");
    obj1.setSalary(10000);
    cout<<"Employee Name: "<<obj1.employeeName<<endl;
    cout<<"Employee Salary: "<<obj1.getSalary()<<endl;
    Employee1 obj2; // id, salary → garbage values
    Employee1 obj3{}; // id = 0, salary = 0.0
    P_Employee obj4("Alice", 15000); // parameterized constructor   
    cout<<"Employee Name: "<<obj4.employeeName<<endl;
    cout<<"Employee Salary: "<<obj4.salary<<endl;   
    C_Employee obj5("Bob", 20000); // parameterized constructor
    cout<<"Employee Name: "<<obj5.employeeName<<endl;
    cout<<"Employee Salary: "<<obj5.salary<<endl;
    C_Employee obj6 = obj5; // copy constructor
    cout<<"Employee Name: "<<obj6.employeeName<<endl;
    cout<<"Employee Salary: "<<obj6.salary<<endl;   
    




    return 0;
}