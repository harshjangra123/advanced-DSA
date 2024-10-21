#include<bits/stdc++.h>
using namespace std;
int main(){
    //it will create maxheap by default
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    
    pq.push(0);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //creating min_heap
    priority_queue<int,vector<int> ,greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(30);
    min_pq.push(5);
    min_pq.push(1);

    cout<<min_pq.top()<<endl;
    min_pq.pop();
    cout<<min_pq.top()<<endl;

    return 0;
}