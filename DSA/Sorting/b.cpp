#include <bits/stdc++.h>
using namespace std;


// basically rearrange them such that , the max medain can be achived , for that
// you need to follow this (any,2nd max,1st max)
// ans= sort in reverse, then ans = sum of k from i=k
// k=no. of cluster (n/3)

int iski_MKC(vector<int>& a) {  
    int n=a.size(),k=n/3;  
    sort(a.rbegin(),a.rend());
    int ans=0;

    for(int i=k;i<min(2*k,n);i++) ans+=a[i];
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
        
    
    cout << iski_MKC(a) << endl;
    return 0;
}
