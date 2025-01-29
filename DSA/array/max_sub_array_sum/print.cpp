#include <bits/stdc++.h>
using namespace std;
int main()
{

// O(n)  space sbme 1 hai so chill

vector<int> a= {-2,1,-3,4,-1,2,1,-5,4};

int n=a.size(),ans=INT_MIN,sum=0;
int start=0,end=0,temp_start=0;
for(int i=0;i<n;i++){
    sum +=a[i];
    if(sum>ans){
        ans=sum;
        start = temp_start;
        end= i;
    }

    if(sum<0){
        sum=0;
        temp_start=i+1;// move start to next index
    }
}
cout<<"ans = "<<ans<<endl;
cout<<"array = ";

for(int i=start;i<=end;i++) cout<<a[i]<<" ";

return 0;
}