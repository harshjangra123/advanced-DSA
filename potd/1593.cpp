#include<bits/stdc++.h>
using namespace std;

void allsubstr(string s,string& curr,int i){
    if(!curr.empty()){
        cout<<curr<<endl;
    }
    for (int j = i;j<s.size();j++)
    {
        curr+=s[j];
        allsubstr(s,curr,j+1);
        curr.pop_back();
    }
}

void allsubstr(string s){
    for (int i = 0; i < s.length(); i++) {
        // Loop to get substrings starting from i
        for (int j = i; j < s.length(); j++) {
            // Print substring from i to j
            cout << s.substr(i, j - i + 1) << endl;
    }
    }
    return;
}

void helper(string s,string curr,map<string,int>& mp,int i)
{
    if(i == s.size()){
        return;
    }
    for(int j = i;j<s.size();j++){
        string substring = s.substr(i,j-i+1);

        if(mp.find(substring) == mp.end()){
            mp[substring] = 1;
            helper(s,substring,mp,j+1);
        }
    }
}

int main(){
    string temp = "";
    map<string,int> mp;
    helper("ababccc",temp,mp,0);
    cout<<mp.size();
}