#include <bits/stdc++.h>
using namespace std;
int mod;

int powm(int x, int n)
{ // implimenting X^n

    x%=mod;
    if(n==0) return 1;
    if(n==1) return x;
    int ans=powm(x*x,n/2);

    if(n&1) return x*ans%mod;
    else return ans;

}
int main()
{

    int x,n;
    cin>>x>>n>>mod;

    cout<<powm(x,n);

    return 0;
}