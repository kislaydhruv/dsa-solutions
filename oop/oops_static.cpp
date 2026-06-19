#include<bits/stdc++.h>
using namespace std;

class S{
    public:
    static int count  ;
    S(){
        count++ ;


    }

    //we can use the static variable in non static method 
    int getCount (){
        return count;

    }
    void resetCount(){
        count = 0;

    }


};
// In C++ 17 and lower we use this technique
int S::count = 0;


int main(){
    S one;
    S two;
    cout<<two.getCount()<<endl;
    two.resetCount();
    cout<<two.getCount()<<endl;
    S three;
    cout<<two.getCount()<<endl;





}