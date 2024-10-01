#include<bits/stdc++.h>
using namespace std;
int main(){
    //unordered_map<int,string> mp; it will not keep it in sorted manner 
    map<int,string> mp; //it will keep the keys in sorted manner
    mp[1] = "apple";
    mp[2] = "mango";
    mp[3] = "cherry";
    mp[4] = "grape";
    mp.insert({5,"banana"});

    for(auto& pair : mp){
        cout<<pair.first<< "  "<<pair.second<<endl;
    }
    cout<<mp[1]<<endl;

    int key = 6;
    if(mp.find(key) != mp.end()){
        cout<<key<<"  "<<mp[key]<<endl;
    }
    else{
        cout<<"key not find"<<endl;
    }

    cout<<mp.size()<<endl;
    mp.erase(2);
    cout<<mp.empty()<<endl;
    cout<<mp.size()<<endl;

    mp.clear();

    return 0;
}