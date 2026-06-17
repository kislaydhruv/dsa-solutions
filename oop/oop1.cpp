#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    int salary; // to store the ssalary of the employee
    public:
    string employeeName; // to store the name of the employee
    //Method to set the employee name 
    void setEmployeeName(string name){
        employeeName = name;
    }
    //Method to set the employee salary
    void setEmployeeSalary(int sal){
        salary = sal;
    }
    //Method to get the salary 
    int getSalary(){
        return salary;
    }

};

int main(){
    // Creating an object of employee class
    //stack memory allocation for the object obj1 and obj2
    Employee obj1;
    // setting different attributes of object 1 using available methods 
    obj1.setEmployeeName("John");// setting the name of the obj1 to John
    obj1.setEmployeeSalary(50000);// setting the salary of the obj1 to 50000
    // printing the name and salary of the obj1
    cout<<"Employee Name: "<<obj1.employeeName<<endl; // accessing the public attribute employeeName directly and printing it
    cout<<"Employee Salary: "<<obj1.getSalary()<<endl; // accessing the salary of the obj1 using the getSalary method and printing it
    
    Employee obj2;
    obj2.setEmployeeName("Kislay");
    obj2.setEmployeeSalary(60000);
    cout<<"Employee Name: "<<obj2.employeeName<<endl;
    cout<<"Employee Salary: "<<obj2.getSalary()<<endl;  
    //for heap memory allocation we can use the new keyword to create an object of the class and it will be created in the heap memory and we can access it using a pointer.
    Employee *obj3 = new Employee();
    obj3->setEmployeeName("Alice");
    obj3->setEmployeeSalary(70000);
    cout<<"Employee Name: "<<obj3->employeeName<<endl;
    cout<<"Employee Salary: "<<obj3->getSalary()<<endl; 
    delete obj3; // deallocating the memory allocated for the object obj3 in the heap memory

    return 0;
    //The class by itself doesn't take any memory. It is the object that takes up the memory once initialized.
    //The two objects (obj1 and obj2) have separate memory allocated for them in the program though they have the same attributes and methods. Because of this reason, an object cannot access the attributes and methods of any other object and vice-versa.
    
}