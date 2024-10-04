#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& s) {
        sort(s.begin(),s.end());
        int i = 0;
        int j = s.size()-1;

        long long previous = s[i] + s[j];

        long long res = 0;

        for(;;){
            if(i>j){
                break;
            }
            if(s[i] + s[j] == previous){
                long long x = s[i] * s[j];
                res += x;
                previous = s[i]+s[j];
            }
            else{
                return -1;
            }
            i++; j--;
        }

        return res;
    }
};

int main(){
    return 0;
}