#include <bits/stdc++.h>
using namespace std;
int main()
{

// O(n)  space sbme 1 hai so chill

vector<int> a= {-2,1,-3,4,-1,2,1,-5,4};

int ans=INT_MIN,sum=0;

// for(auto x:a) ans=max(ans,max(x,sum+x)); this is wrong bcz sum never got updated

for(auto x:a){
    sum = max(x,sum+x);
    ans = max(ans,sum);
}
    
    

cout<<ans;

return 0;
}