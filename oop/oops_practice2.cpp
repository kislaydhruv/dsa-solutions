#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    double length;
    double width;
    double area;

    rectangle(){
        length = 1.0;
        width = 1.0;


    }
    rectangle(double l , double w){
        length = l;
        width = w;

    }
    void calculatedArea(){
        area = length*width;

    }
    void displayArea(){
        cout<<"Area of rectangle is: "<<area<<endl; 
    }



};

int main(){
    rectangle r1;
    r1.calculatedArea();
    r1.displayArea();
    rectangle r2(5.0,3.0);
    r2.calculatedArea();
    r2.displayArea();   
    
}