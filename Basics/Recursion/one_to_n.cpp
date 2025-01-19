#include <bits/stdc++.h>
using namespace std;

void pr1(int n){
    if(n==0) return ;
    cout<<n<<" ";
    pr1(n-1);             // N to 1 (using tail recursion)
}

void pr2(int x,int n){
    if(x==n+1) return ;
    cout<<x<<" ";
    pr2(x+1,n);          //  1 to N (using tail recursion)
}


void pr3(int n){
    if(n==0) return;
    pr3(n-1);
    cout<<n<< " ";       // 1 to N , using head recursion
}


void pr4(int n,int x){
    if(x==n+1) return;
    pr4(n,x+1);
    cout<<x<<" ";       // N to 1 , usingn head recursion,
    // is block me x ki value hai to 1, but number iska last me aayega

}

int main()
{
int n;
cin>>n;

pr4(n,1);


return 0;
}