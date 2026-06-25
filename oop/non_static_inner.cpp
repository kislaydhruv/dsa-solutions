#include<bits/stdc++.h>
using namespace std ;

class outerClass{
    //We are creating an instance
    int instanceVar=42;
    public:
    //nested class is being created 
    class innerClass{
        //we are creating a reference variable which points to an outerClass object 
        outerClass &outer;
        public:
        //making a constructor of innerclass and passing outerClass reference as argument 
        innerClass(outerClass &outerRef) : outer(outerRef) {}

        void Display(){
            cout<<outer.instanceVar<<endl;

        }

    };



};


int main(){
    outerClass outerObj;

    outerClass :: innerClass innerObj(outerObj);//Here we are creating an object in innerClass and passing outerClass as argument 
    innerObj.Display();
    return 0 ;




}