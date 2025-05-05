#include <bits/stdc++.h>
using namespace std;
int main()
{


    vector<int> a = {1,2,2,3,4,5,6,6,9,15};
    int n=a.size();
    int ind =-1;

    ind = lower_bound(a.begin(),a.end(),2) - a.begin(); // should be 1
    cout<<ind<<endl;;
    int ind2 =-1;

    ind2 = lower_bound(a.rbegin(),a.rend(),2,greater<int>()) - a.rbegin(); // should be 2
    cout<<n-(ind2+1);


return 0;
}