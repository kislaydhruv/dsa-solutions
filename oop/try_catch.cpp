#include<bits/stdc++.h>
using namespace std ;
/* syntax 
           try{
           Code that might throw an exception
           }
           catch(ExceptionType& e){
           code to handle that exception 
           }
*/

int main(){
    //try catch block for exception handling 
    try{
        vector<int> arr = {1,2,3};
        //out_of_range will be thrown by .at() when index is invalid 
        cout<<arr.at(5)<<endl;
        //The below line will not get executed if the above error got triggered 
        int result = 10/0;
        //warning is generated for this 
        cout<<result<<endl;

    }
    // for out_of_range errors
    catch(const out_of_range& e){
        cout<<"Error:Index is out of range"<<endl;

    }
    //for any other standard error 
    catch(const exception& e){
        cout<<"Error: "<<e.what()<<endl;

    }
    //Multiple catch blocks can be added, and they should be ordered from most specific to most general.
    
    cout<<"The program continues...."<<endl;
    return 0 ;


}
