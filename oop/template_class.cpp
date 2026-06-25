#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Box{
    T value;
    public:
    void set(T value){
        this->value=value;
    }
    T get(){
        return value;


    }

};


int main(){
    Box<int> intBox;
    intBox.set(100);
    cout << intBox.get() << "\n";

    Box<string> strBox;
    strBox.set("Hello Templates");
    cout << strBox.get() << "\n";

    return 0;

}