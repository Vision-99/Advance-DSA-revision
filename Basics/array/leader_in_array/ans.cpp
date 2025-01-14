#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> a(n);

for(int i=0;i<n;i++) cin>>a[i];

vector<int> ans(n-1);
for(int i=0;i+1<n;i++){
    ans[i]=*max_element(a.begin()+i+1,a.end());
}
for(auto x:ans) cout<<x<<" ";
return 0;
}


