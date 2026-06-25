#include<bits/stdc++.h>
using namespace std;

class OuterClass{
    public:
    static int staticVar;
    class NestedClass{
        public :
        void display(){
            cout<<"staticVar:"<<staticVar<<"\n";


        }


    };

};

int OuterClass::staticVar=100;

int main(){
    OuterClass::NestedClass newObj;
    newObj.display();
    return 0 ;
    
}