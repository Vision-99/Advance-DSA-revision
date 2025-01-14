#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> a = {1, 2, 4, 4, 5, 6};
    int x=3;

    // auto lptr = lower_bound(a.begin(),a.end(),x);

    // cout<<"index :"<<lptr - a.begin()<<" value :"<<*lptr;


    auto lptr = upper_bound(a.begin(),a.end(),x);

    cout<<"index :"<<lptr - a.begin()<<" value :"<<*lptr;
  
return 0;
}