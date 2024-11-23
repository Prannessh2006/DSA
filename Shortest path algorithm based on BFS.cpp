#include<iostream>
using namespace std;
#include<vector>
void addedge(int a,int b,vector<vector<int>>& adj){
    adj[a][b]=1;
}
vector<int> parent(5,-1);
vector<int> dist(5,0);
void bfs(int start,int v,vector<vector<int>> adj){
    vector<bool> visited(v,false);
    visited[start]=true;
    vector<int> q;
    q.push_back(start);
    int current;
    while(!q.empty()){
        current=q[0];
        cout<<current<<" ";
        q.erase(q.begin());
        for(int i=0;i<adj[current].size();i++){
            if(adj[current][i]==1 && visited[i]!=true ){
                q.push_back(i);
                visited[i]=true;
                parent[i]=current;
                dist[i]=dist[current]+1;
            }
        }
    }
}
int main(){
    int v=5;
    vector<vector<int>> adj(v,vector<int>(v,0));
    addedge(0,1,adj);
    addedge(0,2,adj);
    addedge(1,3,adj);
    addedge(2,4,adj);
    addedge(3,4,adj);
    cout<<"BFS: ";
    int des,src;
    cin>>src>>des;
    bfs(src,v,adj);
    // for(int i=0;i<5;i++){
    //     cout<<dist[i]<<" ";
    // }
    cout<<"Shortest Path: ";
    int D= des;
    vector<int> path;
    path.push_back(D);
    while(parent[D]!=-1){
        path.push_back(parent[D]);
        D=parent[D];
    }
    for(int i=path.size()-1;i>=0;i--){
        cout<<path[i]<<" ";
    }
}
