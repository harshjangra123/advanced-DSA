#include<bits/stdc++.h>
using namespace std;

//sum form 1 to n
// parameterised wy
int sum1ton(int n,int count){
    if(n == 0)return count;
    count = count+n;
    return sum1ton(n-1,count);
}
//functional way
int sum1ton(int n){
    if(n == 0)return 0;
    return n+sum1ton(n-1);
}

int main(){
    cout<<sum1ton(5);
}