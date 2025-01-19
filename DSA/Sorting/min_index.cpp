#include <bits/stdc++.h>
using namespace std;



int min_ind(vector<int>&a){
    int min_ele=INT_MAX,ans=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]<min_ele){
            min_ele=a[i];
            ans=i;
        }
    }
    return ans;
}


int main()
{

vector<int> a={2,5,9,6,3,6,1,2,3};// min ele indx=5

//int j=min_ind(a);             // old method
int j=min_element(a.begin(),a.end())-a.begin();  // new method

cout<<j;
return 0;
}