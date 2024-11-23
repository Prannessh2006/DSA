#include<iostream>
using namespace std;
#include<vector>
void addedge(int a,int b,vector<vector<int>>& adj){
    adj[a][b]=1;
}
vector<bool> visit(5,false);
void dfs(int start,vector<vector<int>> adj){
    visit[start]=true;
    cout<<start<<" ";
    for(int i=0;i<adj[start].size();i++){
        if(adj[start][i]==1 && visit[i]==false){
            dfs(i,adj);
        }
    }
}
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
    bfs(0,v,adj);
    cout<<"\nDFS: ";
    dfs(0,adj);
}
