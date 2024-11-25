#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void addedge(int u,int v,vector<vector<int>>& adj){
    adj[u][v]=1;
}
vector<bool> visited(6,false);
void toplogicalsort(vector<vector<int>>& adj,int v,stack<int>& st){
    visited[v]=true;
    for(int i=0;i<6;i++){
        if(adj[v][i]==1 && !visited[i]){
            toplogicalsort(adj,i,st);
        }
    }
    st.push(v);
}
int main(){
    vector<vector<int>> adj(6,vector<int>(6,0));
    addedge(5,0,adj);
    addedge(4,0,adj);
    addedge(3,1,adj);
    addedge(4,1,adj);
    addedge(5,2,adj);
    addedge(2,3,adj);
    stack<int> st;
    for(int i=0;i<6;i++){
    if(!visited[i])
    toplogicalsort(adj,i,st);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
