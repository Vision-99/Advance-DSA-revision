#include <bits/stdc++.h>
using namespace std;

int rev(int n){  // t- o(d) = d=10(max 10 digits in int), T=O(1)
    string s=to_string(n);
    reverse(s.begin(),s.end());
    return stoi(s);
}

bool is_pali(int n){ // t- o(d) = d=10(max 10 digits in int), T=O(1)
    string s=to_string(n);
    string x=s;
    reverse(s.begin(),s.end());
    return x==s;
}

int main()
{


int n;
cin>>n;

while(!is_pali(n)){ // o(k), k=no. of iteration
    n= n+ rev(n);  // size inc with (log(n)) with base 10 
}
cout<<n;

// overall Time -O(k.log(n))
// space - (log(n)) with base 10 

return 0;
}