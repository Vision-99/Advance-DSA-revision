#include <bits/stdc++.h>
using namespace std;
// code to check prime in range L to R
bool is_pr(int n){
    for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
    else return 1;
}

int count(int n){
    vector<int> a(n+1,1);
    a[0]=a[1]=0;// as 0 and 1 both are not prime

    for(int i=2;i*i<=n;i++)
        if(a[i])
            for(int j=i*i;j<=n;j+=i) 
                a[j]=0;
    return accumulate(a.begin(),a.end(),0);
}

// T- O(nlog(logn))
// s- O(n)



int main()
{
int l,r;
cin>>l>>r;
int x=is_pr(l);
cout<<count(r)-count(l) +x;

return 0;
}