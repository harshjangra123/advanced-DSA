#include<bits/stdc++.h>
using namespace std;

bool iscyclic_util(vector<vector<int>> adjlist,vector<bool> visited,int curr){
    if(visited[curr])return true;

    visited[curr] = true;
    bool flag = false;
    for(int neighbour : adjlist[curr]){
        flag = iscyclic_util(adjlist,visited,neighbour);
        if(flag)return flag;
    }
    return false;
}

bool iscyclic(vector<vector<int>>& adjlist){
    int size = adjlist.size();
    vector<bool> visited(size,0);

    bool flag = false;
    for(int i = 0;i<size;i++){
        visited[i] = true;
        for(int j = 0;j<adjlist[i].size();j++){
            flag = iscyclic_util(adjlist,visited,adjlist[i][j]);
        }
        if(flag)return flag;
    }

    return false;
}

int main(){
    int u,v;
    cin>>u>>v;
    // u-number of nodes,v-number of edges

    vector<vector<int>> adjlist(u);
    for(int i = 0;i<v;i++){
        int n,m;
        cin>>n>>m;
        adjlist[n].push_back(m);
    }

    cout<<iscyclic(adjlist)<<endl;
}


