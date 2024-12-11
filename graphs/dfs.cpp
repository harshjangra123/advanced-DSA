#include<bits/stdc++.h>
using namespace std;


void dfs(int node,vector<bool>& visited,vector<vector<int>>& adjlist){
    visited[node]=true;
    cout<<node<<" ";

    for(int neighbour : adjlist[node]){
        if(!visited[neighbour]){
            dfs(neighbour,visited,adjlist);
        }
    }
}

void dfs(int s,vector<int> g[],bool* vis)
{
    vis[s] = true;
    cout<<s<<" ";
    for(int i =0;i<g[s].size();i++){
        if(vis[g[s][i]] == false){
            dfs(g[s][i],g,vis);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m; // n-no. of nodes , m-no. of edges

    // adjacency list representation
    vector<vector<int>> adjlist(n+1);
    cout<<"enter the vertices (u , v):\n";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v); //adding the vertix v to u's adjacency list
    }

    vector<bool> visited(n+1,false);

    dfs(1,visited,adjlist);
    return 0;

}