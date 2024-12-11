#include<bits/stdc++.h>
using namespace std;

void bfs(int node,vector<vector<int>>& adjlist){
    vector<bool> visited(adjlist.size(),0);
    queue<int> q;

    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int currnode=q.front();
        q.pop();
        cout<<currnode<<" ";

        for(int neighbour : adjlist[currnode]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
}


int main(){
    int n,m;cin>>n>>m;

    vector<vector<int>> adjlist(n);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adjlist[u].push_back(v);
        // adjlist[v].push_back(u); just for undirected graph only
    }

    bfs(1,adjlist);

    return 0;
}