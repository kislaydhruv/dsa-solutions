#include<bits/stdc++.h>
using namespace std ;

class School{
    private:
    string schoolName;
    int schoolId;
    public:
    School(){
        schoolName = "RPS";
        schoolId = 101;
    }
    void printSchoolName(){
        cout<<schoolName<<endl;

    }

    

};
class student : public School{
    private:
    string studentName;
    public:
    student(string studentName){
        this->studentName = studentName;
    }
    void printStudentName(){
        cout<<studentName<<endl;

    }

};

class animal {
    public:
    void eat(){
        cout<<"This animal eats food."<<endl;

    }

};
class dog : public animal{
    public:
    void bark (){
        cout<<"The dog barks"<<endl;

    }

};
class pet : public dog{
    public:
    void play(){
        cout<<"The pet plays with it's owner"<<endl;

    }

};
class cat: public animal{
    public:
    void scratch(){
        cout<<"a cqat scratches"<<endl;

    }

};

int main(){
    student s1("Kislay");
    s1.printSchoolName();
    s1.printStudentName();

    pet d1;
    d1.eat();
    d1.bark();
    d1.play();

    cat c1;
    c1.eat();
    c1.scratch();
    



    return 0;

}