#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age ;
    person(string n ,int a ){
        name=n;
        age=a;

    }

    person& operator = (const person& other){

        if(this==&other){
            return *this;
        }
        name=other.name;
        age=other.age;

        cout<<"Copy assignment Operator Called "<<endl;
        return *this ;

    }
    void display(){
        cout<<name<<" "<<age<<endl;

    }


};
int main(){
    person p1("Alex", 25);
    person p2("Temp", 0); // already created object

    // Cloning using assignment
    p2 = p1; // invokes assignment operator

    p2.name = "Chris";

    p1.display();
    p2.display();

    return 0; 
}
