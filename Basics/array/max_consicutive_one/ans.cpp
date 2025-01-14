#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> a(n);

for(int i=0;i<n;i++) cin>>a[i];


int ans=-1,temp=1;

for(int i=0;i+1<n;i++){
    if(a[i]==1 and a[i+1]==1) temp++;
    else temp=1;
    ans= max(ans,temp);
}
cout<<ans;
return 0;
}