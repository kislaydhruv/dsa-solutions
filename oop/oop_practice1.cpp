#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    int rollNumber;
    public:
    string name;
    void setDetails(string n , int r){
        name = n;
        rollNumber = r;


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