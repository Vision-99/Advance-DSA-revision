#include <bits/stdc++.h>
using namespace std;

// using recursion

int GCD(int a,int b){

    if(b==0) return a; // we pass values in such a way that 
    // first number if greater then the second number
    return GCD(b,a%b);
}


int main()
{

int x,y;
cin>>x>>y;

cout<<GCD(x,y);

return 0;
}