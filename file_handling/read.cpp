#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream reader("example.txt");

    if(!reader.is_open()){
        cout<<"There's some problem in opening the file "<<endl;
        return 0 ;

    }
    string line ;
    int i = 1;
    //Read each line till EOF 
     while(getline(reader, line)){
        cout<<"Line"<<i<<" : "<<line<<endl;
        i++;
     }
     //No explicit close is required because of RAII 
     reader.close();
     return 0 ;

}