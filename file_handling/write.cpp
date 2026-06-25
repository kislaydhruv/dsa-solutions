#include<bits/stdc++.h>
using namespace std;

int main(){
    //opening a file to overwrite or just opening
    ofstream writer ("example.txt"); // writer is a variable 
    if(!writer.is_open()){
        cout<<"failed to open the file"<<endl;
        return 0;


    }
    //it's similar to cout 
    writer<<"Hey this is new example file "<<endl;
    writer<<"Just checking the methods How is it working"<<endl;

    writer.close();
    //closing the file here

    cout<<"File written successfully "<<endl;
    return 0 ;

    
}