#include <bits/stdc++.h>
using namespace std;
int main()
{

// O(n)  space sbme 1 hai so chill

vector<int> a= {-2,1,-3,4,-1,2,1,-5,4};
int n=a.size(),ans=INT_MIN,sum=0;
for(int i=0;i<n;i++){
    sum +=a[i];
    if(sum>ans) ans=sum;
    if(sum<0) sum=0;// -ve sum ki mkc
}
cout<<ans;

return 0;
}