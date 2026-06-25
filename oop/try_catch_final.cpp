#include<bits/stdc++.h>
using namespace std;

// a small helper to show in C++ why we not need finlly keyword particularly 

struct Cleanup{
    // we are making a destructor here 
    //and destructor gets executed when the container ends 
    ~Cleanup(){
        cout<<"Cleanup executed (RAII)"<<endl;

    }

};
int main(){
    //Here the container is int main() so before closing int main() destructor will get executed 
    Cleanup c;
    try {
        cout<<"Inside try Block"<<endl;
        throw runtime_error("Something went wrong ");
        //There's no concept of throws in C++
        

    }
    catch(const exception& e){
        cout<<"Caught : "<<e.what()<<endl;


    }
    cout<<"Program continues...."<<endl;


}