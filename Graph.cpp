#include<bits/stdc++.h>
using namespace std;
#define WHITE 0
#define GRAY 1
#define BLACK 2

int G[100][100]/*={0}*/,color[100],d[100],prev[100],q[100];
int front = 0 , rear =0;

int main(){
int n,e,s,u,v,i,j;
cout<<"Enter Number of nodes: ";
cin>>n;
cout<<"Enter Number of edges: ";
cin>>e;
cout<<"Enter Number of sources: ";
cin>>s;

//for(i=0;i<n;i++){
//    for(j=0;j<n;j++){
//        G[i][j]=0;
//    }
//}
for(i=0;i<e;i++){
    cout<<"Enter edges :";
    cin>>u>>v;
    G[u][v]=1;
    G[v][u]=1;
}

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<G[i][j]<<"\t";
    }
    cout<<endl;
}
return 0;

}
