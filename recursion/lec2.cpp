#include<bits/stdc++.h>
using namespace std;

//print name 5 times
void fivtimes(int n){
    if(n == 0)return;
    cout<<"harsh"<<endl;
    fivtimes(n-1);
}
//print from n to 1
void printnto1(int n){
    if(n == 0)return ;
    cout<<n<<endl;
    printnto1(n-1);
}

void print1ton(int n){
    if(n == 0)return;
    print1ton(n-1);
    cout<<n<<endl;
}



int main(){
    print1ton(5);
}