#include<bits/stdc++.h>
using namespace std;
template <typename T>
T maxValue(T a, T b){
    return (a>b) ? a : b;

}

int main(){
    cout<<maxValue(12,56)<<endl;
    cout<<maxValue(10.5,67.8)<<endl;
    cout<<maxValue("hello","hi")<<endl;//this give random answer as the computer stores it as pointers and check the RAM to get which is stored higher 
    //array to pointer decay  
    cout<<maxValue(string("Hello"),string("hii"))<<endl;
    //now the template considers it as string and will give result according to dictionary 




}