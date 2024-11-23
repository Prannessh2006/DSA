#include<iostream>
using namespace std;
#include<vector>
#include<queue>
void dfs(vector<vector<int>>& adj,vector<bool>& visited,int s){
    visited[s]=true;
    cout<<s<<" ";
    for(int x:adj[s]){
        if(!visited[x]){
            dfs(adj,visited,x);
        }
    }
}
void bfs(vector<vector<int>>& adj,int s){
    queue<int> q;
    vector<bool> visited(adj.size(),false);
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int curr=q.front();
        cout<<curr<<" ";
        q.pop();
        for(int x:adj[curr]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
void addedge(vector<vector<int>>& adj,int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
    int n;
    cin>>n;
    vector<bool> table(n,false);
    vector<vector<int>> adj(n);
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,3);
    addedge(adj,1,4);
    addedge(adj,2,4);
    cout<<"Breadth first search: ";
    bfs(adj,0);
    cout<<"\n Depth first search: ";
    dfs(adj,table,0);
}
