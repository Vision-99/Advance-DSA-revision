#include <bits/stdc++.h>
using namespace std;

// test case-10^5
// n-10^5
// find fact with % 10^7

const int mod = 1e9 +7;

int main()
{

int t;
cin>>t;
const int N=1e5+1;

vector<int> a(N);
a[0]=a[1]=1;
for(int i=2;i<N;i++){
    a[i] = (i*a[i-1])%mod;
}

while(t--){
    int n;
    cin>>n;
    // long long fact = 1;

    // for(int i=2;i<=n;i++){      this will give tle
    //     fact = (fact*i)%mod;
    // }
    // cout<<fact<<endl;

    cout<<a[n]<<endl;
}



return 0;
}