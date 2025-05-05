#include <bits/stdc++.h>
using namespace std;
const int m=1e9+9;


bool isp(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{

if(isp(m)) cout<<1;
else cout<<0;


return 0;
}