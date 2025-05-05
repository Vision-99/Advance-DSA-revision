#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int> a;

    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            a.push_back(i);
            n/=i;
        }
    }
    if(n>1) a.push_back(n);
    
    sort(a.begin(),a.end());
    for(auto x:a) cout<<x<<" ";
return 0;
}