#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    string name;
    int id;
    public:
    void displayDetails(string name, int id){
        this->name = name;
        this->id = id ;
        cout<<name<<endl;
        cout<<id<<endl;



    }

};

class Manager : public Employee{
    private:
    int teamSize;
    public:
    Manager(){
        teamSize=10;
    }
    Manager(int teamSize){
        this->teamSize = teamSize;


    }
    void displayDetails(string name, int id){
        cout<<teamSize<<endl;


    }

};
class Engineer : public Employee{
    private:
    string specialization ;
    public:
    Engineer(){
        specialization="Engineer";
        
    }
    Engineer(string specialization){
        this->specialization = specialization;

    }

    

    
    void displayDetails(string name,int id){
        cout<<specialization<<endl;


    }

};
int main(){
    Employee E1;
    E1.displayDetails("kislay", 2301);
    Manager k1;
    k1.displayDetails("Kislay",2301);


}