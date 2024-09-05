#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    //max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(3);
    pq.push(5);

    // pq.pop();
    // cout<<pq.top();
    // cout<<pq.size();//pq.empty()

    //min heap
    priority_queue<int, vector<int> ,greater<int> > minheap;
    minheap.push(5);
    minheap.push(4);
    minheap.push(3);
    minheap.push(2);
    minheap.push(1);
    minheap.pop();
    cout<<minheap.top();
}