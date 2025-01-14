#include <bits/stdc++.h>
using namespace std;
int main()
{

unordered_set<int> a= {0,1,2,3,4,7,5};

a.erase(4);
for(auto x:a) cout<<x<<" ";

return 0;
}