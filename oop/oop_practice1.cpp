#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    int rollNumber;
    public:
    string name;
    void setDetails(string n , int r){
        name = n;// we can also write this->name = n; because the name of the parameter and the name of the attribute are same but we can also write name = n; because the compiler will understand that we are assigning the value of n to the attribute name of the class student.    
        rollNumber = r;//we can also write this->rollNumber = r; because the name of the parameter and the name of the attribute are same but we can also write rollNumber = r; because the compiler will understand that we are assigning the value of r to the attribute rollNumber of the class student.     
        


    }
    void displayDetails(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<rollNumber<<endl;

    }

};

int main(){
    student s1;
    s1.setDetails("Striver",101);
    s1.displayDetails();

}