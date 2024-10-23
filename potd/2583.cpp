#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 


#define ll long long
class Solution {
public:

    void lot(TreeNode* root,vector<ll>& ans){
        if(root == NULL) return;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int levelsize = q.size();

            ll sum = 0;
            for(int i =0;i<levelsize;i++){
            TreeNode* curr = q.front();
            q.pop();
            sum+=curr->val;
            cout<<curr->val<<" ";

            if(curr-> left != nullptr){
                q.push(curr->left);
            }
            if(curr->right != nullptr){
                q.push(curr->right);
            }

        
            }
            ans.push_back(sum);
            cout<<endl;

        }

    }

    static bool compare(ll a,ll b){
        if(a>b){
            return 1;
        }
        return 0;
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<ll> ans;
        lot(root,ans);
        sort(ans.begin(),ans.end(),compare);
        for(ll i : ans){
            cout<<i<<" ";
        }
        if(k-1 >= ans.size()){
            return -1;
        }
        return ans[k-1];
    }
};