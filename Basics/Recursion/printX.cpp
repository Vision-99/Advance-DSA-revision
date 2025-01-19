#include <bits/stdc++.h>
using namespace std;


void hello(int x, int n){
    if(n==0) return;
    cout<<x<<" ";
    hello(x,n-1);
}


int main()
{

int x,n;
cin>>x>>n;

hello(x,n);

return 0;
}