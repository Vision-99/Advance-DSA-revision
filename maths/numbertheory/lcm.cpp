#include <bits/stdc++.h>
using namespace std;

// using while loop

int GCD(int a,int b){

   while(a>0 and b>0){
    if(a>=b) a%=b;
    else b%=a;
   }
    if(a==0) return b;         
    else return a;
}


int main()
{

int x,y;
cin>>x>>y;

cout<<x*y/GCD(x,y);

return 0;
}