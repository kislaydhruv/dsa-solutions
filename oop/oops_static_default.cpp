#include<bits/stdc++.h>
using namespace std ;

class Example1 {
    public:
    // we use static if we want something to be shared by everyone
    // static don't need any object 
    static void staticMethod(){
        cout<<"This is a static method."<<endl;

    }
};

class Example2 {
    public :
    // in c++ we call it regular method in java it's known as the default
    // well this is for creatng individuality and using the same template 
    virtual ~Example2()= default;
    // we are using heap so we must use thi destructr 

    void defualtMethod(){
        cout<<"This is a default method "<<endl;

    }
};

class Demo : public Example2{

};

int main(){
    Example1::staticMethod();
    Example2* obj = new Demo();
    obj->defualtMethod();
    delete obj;
    return 0 ;


}