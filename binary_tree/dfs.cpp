#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* left;
    node* right;
    node(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

pair<int,bool> dfs(node* root,vector<int>& sizes){
    if(root == nullptr) return {0,true};
    pair<int,bool> left = dfs(root->left,sizes);
    pair<int,bool> right = dfs(root->right,sizes);

    if(left.second && right.second && left.first == right.first){
        int size = left.first+right.first+1;
        sizes.push_back(size);
        return {size,true};
    }
    return {0,false};
}


int main(){
    node* root;
    vector<int> ans;
    dfs(root,ans);
    
}
