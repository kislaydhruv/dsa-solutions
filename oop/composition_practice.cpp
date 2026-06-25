#include<bits/stdc++.h>
using namespace std;

class Class {
    public:
    string name ;
    string id ;
    Class(string name , string id ){
        this->name = name;
        this->id = id;


    }
    void display() {
        cout << name << " (ID: " << id << ")";
    }


};

class University{
    public:
    vector<Class> colleges;
    string name;
    University(string name){
        this->name = name;


    }

    void addCollege(Class college){
        colleges.push_back(college);

        

    }
    void displayDetails(){
        cout<<name<<endl;
        for(Class college: colleges ){
          college.display();
            cout << endl;  

        }

    }

};

int main(){
    University myUni("Tech University");
    
    Class c1("College of Engineering", "ENG101");
    Class c2("College of Sciences", "SCI202");
    
    myUni.addCollege(c1);
    myUni.addCollege(c2);
    
    myUni.displayDetails();

}