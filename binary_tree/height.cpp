#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int data){
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

class tree{
    public:
    node* root;

    tree(){
        root = nullptr;
    }

    node* insert(node* root,int data){
        if(root == nullptr){
            return new node(data);
        }
        else if(data > root->val){
            insert(root ->left,data);
        }
        else{
            insert(root->right,data);
        }
    }

    int height(node* root){
        if(root == NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);

        return max(left,right) + 1;
    }

    //wrapper functions
    void insertion(int val){
        insert(root,val);
    }

    int size(){
        return height(root);
    }

};


int main(){
    tree t;
    for(int i =0;i<8;i++){
        int x;cin>>x;
        t.insertion(x);
    }
    cout<<t.size();
}