#include<bits/stdc++.h>
using namespace std;

int main (){
    int n = 4 ;
    for (int i=0 ; i<n; i++){
            for (int j = n-i-1;j>0;j-- ){
                cout<<" ";

            }
            for(int k=1;k<=2*i+1;k++){
                cout<<"*";

            }
            for (int m = n-i-1;m>0;m-- ){
                cout<<" ";

            }
            cout<<endl;


        }
return 0;

}