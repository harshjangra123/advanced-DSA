#include <iostream>
#include <vector>

using namespace std;

long long score(int i,int j,vector<int>& v){
        long long sc = (j-i)*v[i];
        return sc;
}


long long max_score(vector<int> &v,int i,int n){
    if(i == n-1){
        return 0;
    }
    long long maxscore = 0;

    for(int j = i+1;j<n;j++){
        long long current_score = score(i,j,v);

        long long remainingscore = max_score(v,j,n);
        maxscore = max(maxscore,current_score+remainingscore);
    }

    return maxscore;
}


int main() {
    vector<int> nums = {1, 3, 1, 5};
    int n = nums.size();
    cout<<max_score(nums,0,n);
    return 0;
}
