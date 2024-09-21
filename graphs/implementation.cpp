#include<bits/stdc++.h>
using namespace std;


void dfs(int node,vector<bool> &visited,vector<int> list[]){
    visited[node] = 1;
    cout<<node<<" ";

    for(int i : list[node]){
        if(visited[i] == 0){
            dfs(i,visited,list);
        }
    }
}

int main(){

    // for(int i = 1;i<=nodes;i++){
    //     cout<<"node "<<i<<": ";
    //     for(int neighbour : list[i]){
    //         cout<<neighbour<<" ";
    //     }
    //     cout<<endl;
    // }


    int nodes = 4;
    vector<int> list[nodes+1];

    list[1].push_back(2);
    list[1].push_back(3);

    list[2].push_back(1);
    list[2].push_back(4);

    list[3].push_back(1);
    list[3].push_back(4);

    list[4].push_back(2);
    list[4].push_back(3);

    vector<bool> visited(nodes+1,0);

    dfs(1,visited,list);
    return 0;
}