#include <bits/stdc++.h>
using namespace std;


int ncr(int n,int r){
    long long ans=1;
    if (r > n - r) 
        r = n - r;
        
    for(int i=0;i<r;i++)
        ans=ans*(n-i)/(i+1);
     
    return (int)ans;
}


int main()
{
int n,r;
cin>>n>>r;

cout<<ncr(n,r);


return 0;
}