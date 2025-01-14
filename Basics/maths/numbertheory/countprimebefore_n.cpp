#include <bits/stdc++.h>
using namespace std;

int count(int n){
    vector<int> a(n,1);
    a[0]=a[1]=0;// as 0 and 1 both are not prime

    for(int i=2;i*i<n;i++)
        if(a[i])
            for(int j=i*i;j<n;j+=i) 
                a[j]=0;
    return accumulate(a.begin(),a.end(),0);
}


int main()
{
int x;
cin>>x;

cout<<count(x);

return 0;
}