#include<bits/stdc++.h>
using namespace std;

class trienode{
    public:
    char val;
    vector<trienode*> children;
    //we cant initialize size of vector in a class
    //we can do it by constructor
    bool isendofword;


    trienode(char c,bool x = false){
        isendofword = x;
        val = c;
        children = vector<trienode*>(26,nullptr);
    }

};

class trie{
    public:

    trienode* root;

    trie(){
        root = new trienode('/');
    }

    void insert(string word){
        trienode* node = root;
        for(char c : word){
            int idx = c - 'a';
            if(node->children[idx] == nullptr){
                node->children[idx] = new trienode(c);
            }
            node = node->children[idx];
        }
        node->isendofword = true;
    }

    bool search(string word){
        trienode* node = root;
        for (char c : word)
        {
            int idx = c-'a';
            if(node->children[idx] == nullptr){
                return false;
            }
            else{
                node = node->children[idx];
            }
        }
        return node->isendofword;
    }

};

int main(){
    trie t;
    t.insert("cat");
    t.insert("catalog");
    t.insert("meta");
    cout<<boolalpha;
    cout<<t.search("cat")<<endl;
    cout<<t.search("cata")<<endl;
    return 0;
}