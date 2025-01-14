#include <bits/stdc++.h>
using namespace std;
int main()
{

// O(n^3)  space sbme 1 hai so chill

vector<int> a= {-2,1,-3,4,-1,2,1,-5,4};
int n=a.size(),ans=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++) sum+=a[k];
        ans=max(ans,sum);
    }
}
cout<<ans;

return 0;
}