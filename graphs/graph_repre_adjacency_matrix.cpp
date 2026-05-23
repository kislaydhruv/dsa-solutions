#include<iostream>
using namespace std;
int main (){
    // so we are taking the number of nodes and the number of edges 
    int n,m;
    cin>>n>>m;
    //making the adjacency matrix 
    int adj[n+1][m+1];
    for(int i = 0;i<m;i++){
       int u , v;
       cin>>u>>v;
       //for marking the edges as 1 and the left as zero 
       adj[u][v]=1;
       adj[v][u]=1;

    }
    return 0 ;

}
// The space taken here is O(n2)