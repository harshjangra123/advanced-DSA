// print all subsequence -- a sequence which follows an order
#include<bits/stdc++.h>
using namespace std;
void ss(int index,vector<int>& v,vector<int>& curr,vector<vector<int>>& g){
    if(index >= v.size()){
        g.push_back(curr);
        return;
    }
    ss(index+1,v,curr,g);
    curr.push_back(v[index]);
    
    ss(index+1,v,curr,g);
    curr.pop_back();

}

int main(){
    vector<int> v = {10,9,2,5,3,7,101,18};
    vector<vector<int>> g;
    vector<int> curr;
    ss(0,v,curr,g);
    for(vector<int> i : g){
        for (int j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}