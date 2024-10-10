#include<bits/stdc++.h>
using namespace std;
int main(){
    // for each element of the vector find next grater element in the right
    vector<int> v = {4,2,0,3,2,5};
    vector<int> res(v.size(),-1);

    stack<int> s;

    for(int i = 0;i<v.size();i++){

    while(!s.empty() && v[s.top()] < v[i]){
        res[s.top()] = v[i];
        s.pop();
    }
    s.push(i);
    }
    
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}