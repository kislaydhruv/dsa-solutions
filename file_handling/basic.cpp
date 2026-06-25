#include<bits/stdc++.h>
#include<filesystem>

using namespace std;
namespace fs = std::filesystem;


int main(){
    /*
    C++ provides file stream classes from the <fstream> header to handle file operations. A file can be created simply by opening an ofstream on that path.
*/
    ofstream file("example.txt");
    fs::path p("example.txt");

    cout<<fs::absolute(p).string()<<endl;

    if(file.is_open()){
        cout<<"File is opened/created"<<endl;
        file.close();


    }
    else{
        cout<<"there's some problem"<<endl;


    }
    return 0 ;


}