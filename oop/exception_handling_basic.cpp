#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1=10,num2=0;
    //we will do exception handling 
    try{
        //in this we will put some risky code which can throw errors but we still want function to continue and don't stop adruptly 
        if(num2 == 0 ){
            throw runtime_error("Divison by zero is not allowed! ");

        }
        // this code will not be executed if the above error gets triggered 
        int result=num1/num2;
        cout<<"Result: "<<result<<endl;


    }
    //we are passing runtime_error as an argument 
    catch (const runtime_error& e){
        //e.what will show what we wrote above 
        cout<<"Error:"<<e.what()<<endl;

    }
    //Remaining code
    cout<<"Program continues"<<endl;
    




}