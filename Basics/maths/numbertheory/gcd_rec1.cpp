#include <bits/stdc++.h>
using namespace std;

// using recursion

int GCD(int a,int b){

    if(a==0) return b;
    if(b==0) return a;
    
    if(a>=b)
        return GCD(a%b,b);
    else 
        return GCD(a,b%a);
}


int main()
{

int x,y;
cin>>x>>y;

cout<<GCD(x,y);

return 0;
}