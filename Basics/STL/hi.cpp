#include <bits/stdc++.h>
using namespace std;
int main()
{

vector<int> a= {1, 2, 5, 6};

a.insert(a.begin(),0);

for(int x: a)   cout<<x<<" ";

return 0;
}