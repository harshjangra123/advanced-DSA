#include<bits/stdc++.h>
using namespace std;

// detecting cycle using disjoint set:
int absolute_root(int& node,vector<int>& ds){
    int idx = node;
    while(ds[idx] != -1){
        idx = ds[idx];
    }
    return idx;
}

void union_set(int& from,int& to,vector<int>& ds){
    int parent_from = absolute_root(from,ds);
    int parent_to = absolute_root(to,ds);
    ds[parent_from] = parent_to;
}

bool isCycle(int v, vector<vector<int>>& edges) {
    vector<int> ds(v,-1);
    for(vector<int> edge : edges){
        int from = edge[0];
        int to = edge[1];
        
        if( absolute_root(from,ds) == absolute_root(to,ds)){
            return true;
        }
        
        union_set(from,to,ds);
    }
    return false;
    
}

int main(){

}