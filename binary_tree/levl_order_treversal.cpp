#include<bits/stdc++.h>
using namespace std;
#define ll long long

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

class tree{
    public:

    node* root;

    tree(){
        root = NULL;
    }

    node* insertion(node* root,int data){
        if(root == NULL){
            return new node(data);
        }
        if(data < root->val){
            root->left = insertion(root->left,data);
        }
        else{
            root->right = insertion(root->right,data);
        }

        return root;
    }

    void inorder_treversal(node* root ){
        if(root == NULL){
            return;
        }
        inorder_treversal(root->left);
        cout<<root->val<<" ";
        inorder_treversal(root->right);
    }

    //breadth first search
    void levelordertreversal(node* root){
        if(root == nullptr) return;

        queue<node* > q;
        q.push(root);

        while (!q.empty())
        {
            node* curr = q.front();
            q.pop();
            cout<<curr->val<<" ";

            if(curr->left != nullptr){
                q.push(curr->left);
            }
            if(curr->right != nullptr){
                q.push(curr->right);
            }
        }
        cout<<endl;
        
    }


    // wrapper function for insertoion
    void insert(int data){
        root = insertion(root,data);
    }

    //wrapper finction for inorder
    void inorder(){
        inorder_treversal(root);
        cout<<endl;
    }

    //wrapper function for levelordertreversal
    void levelorder(){
        levelordertreversal(root);
    }
};


int main(){
    tree t;
    for(int i = 0;i<7;i++){
        int x;cin>>x;
        t.insert(x);
    }
    t.inorder();
    t.levelorder();
    return 0;
}