#include <bits/stdc++.h>
using namespace std;


int nCr(int n,int r){
    if(r>n) return 0;
    if(r>n-r) r = n-r;

    long long ans=1;
    for(int i=0;i<r;i++){
        ans = ans*(n-i)/(i+1);        
    }
    return (int)ans;
}


int main()
{

    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r);


return 0;
}