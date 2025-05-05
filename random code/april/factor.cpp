#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int> a;

    for(int i=1;i*i<=n;i++){
        if(n%i==0) a.push_back(i);
        if(n%i==0 and i!=n/i) a.push_back(n/i);
    }
    sort(a.begin(),a.end());
    for(auto x:a) cout<<x<<" ";
return 0;
}