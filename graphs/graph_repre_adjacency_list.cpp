#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i =0 ; i<m ; i++){
        int u , v ;
        cin>>u>>v;
        //for the non directed graph 
        adj[u].push_back(v);
        //for the directed graph we will remove the below line we will not need it 
        adj[v].push_back(u);

    }
    //Here the space consumed is less than the adjacency matrix 
    return 0 ;

}