#include <bits/stdc++.h>
using namespace std;
int main()
{

vector<int> a={1,2,3,4,5,6,7,8};
vector<int> b={1,2,3,4,5,6,7,8};

reverse(a.begin()+3,a.end());
int n=b.size();
for(int i=3,j=n-1;j>i;i++,j--){
    swap(b[i],b[j]);
}

for(auto x:a) cout<<x<<" ";
cout<<endl;
for(auto x:b) cout<<x<<" ";

return 0;
}