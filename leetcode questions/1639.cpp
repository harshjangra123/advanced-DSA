#include<bits/stdc++.h>
using namespace std;
void ways(int idx,int vector_idx,int target_idx,vector<string> words,string target,int& count){
        if(target_idx >= target.size() || vector_idx >= words.size()){
            count++;
            return;
        }
        string curr = words[vector_idx];
        for(int i = idx;i<curr.size();i++){
            if(target[target_idx] == curr[i]){
                ways(i,vector_idx+1,target_idx+1,words,target,count);
            }
        }
    }
    int numWays(vector<string>& words, string target) {
        int count = 0;
        ways(0,0,0,words,target,count);
        return count;
    }
int main(){

    return 0;
}