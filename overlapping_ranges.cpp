#include<bits/stdc++.h>
using namespace std;



// merged range
vector<pair<int,int>> overlap(vector<pair<int,int>> ranges){
        if (ranges.empty()) return {};
        sort(ranges.begin(),ranges.end());
        vector<pair<int,int>> ans;

        pair<int,int> curr = ranges[0];

        for(int i = 1;i<ranges.size();i++){
            if(ranges[i].first <= curr.second){
                curr.second = max(curr.second,ranges[i].second);
            }else{
                ans.push_back(curr);
                curr = ranges[i];
            }
        }
        ans.push_back(curr);
        return ans;
    }


// number of ranges
int overlaping(vector<pair<int,int>> ranges){
        if (ranges.empty()) return 0;
        sort(ranges.begin(),ranges.end());
        int ans = 0;

        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(auto range : ranges){
            while(!minHeap.empty() && minHeap.top() < range.first){
                minHeap.pop();
            }
            minHeap.push(range.second);
            ans = max(ans,(int)minHeap.size());
        }
        return ans;
    }


int main(){

}