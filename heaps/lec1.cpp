#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
        int v[100];
        int size;
        heap(){
            v[0] = -1;
            size = 0;
        }
        void insert(int val){
            size = size+1;
            int idx = size;
            v[idx] = val;

            while(idx>1){
                int parent = idx/2;
                if(v[parent] < v[idx]){
                    swap(v[parent],v[idx]);
                    idx = parent;
                }
                else{
                    return;
                }
            }

        }

        void print(){
            for(int i = 1;i<=size;i++){
                cout<<v[i]<<" ";
            }
            return;
        }
};


void heapify(vector<int>& v,int i){

    int largest = i;
    int left = i*2 + 1;
    int right = i*2 + 2;

    if(left < v.size() && v[i] < v[left]){
        largest = left;
    }
    if(right < v.size() && v[i] < v[right]){
        largest = right;
    }
    if(largest != i){
        swap(v[largest],v[i]);
        heapify(v,largest);
    }
    
}


int main(){
    heap obj = heap();
    // obj.insert(50);
    // obj.insert(55);
    // obj.insert(53);
    // obj.insert(52);
    // obj.insert(54);
    // obj.print();
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    for(int i = n/2 - 1;i>=0;i--){
        heapify(v,i);
    }
    for(int i : v)cout<<i<<" ";
    // cout<<"sgerd";
    return 0;
}