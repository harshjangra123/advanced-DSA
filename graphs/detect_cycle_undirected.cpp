#include<bits/stdc++.h>
using namespace std;

bool iscyclic_util(vector<vector<int>> adj,vector<int> visited,int curr){
    if(visited[curr] == 2)return true;

    visited[curr] = 1;
    bool flag = false;
    for(int neighbour : adj[curr]){
        if(visited[neighbour] == 1)visited[neighbour] = 2;

        flag = iscyclic_util(adj,visited,neighbour);
        if(flag) return flag;
    }
    return false;
}

bool iscyclic(vector<vector<int>> adj){
    int nodes = adj.size();

    vector<int> visited(nodes,0);
    bool flag = false;

    for (int i = 0; i < nodes; i++)
    {
        visited[i] = 1;
        for (int j = 0; j < adj[i].size(); j++)
        {
            flag = iscyclic_util(adj,visited,adj[i][j]);
            if(flag) return flag;
        }
        visited[i] = 0;
    }
    return flag;
}

int main(){
    int u;int v;
    cin>>u>>v;
    // u - nodes ,v - edges
    vector<vector<int>> adj(u);
    for(int i = 0;i<v;i++){
        int node,nn;
        cin>>node>>nn;

        adj[node].push_back(nn);
        adj[nn].push_back(node);
    }

    cout<<iscyclic(adj);

    return 0;
}