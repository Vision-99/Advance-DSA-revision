#include <bits/stdc++.h>
using namespace std;
// T-O(n)  S-O(n)
// asked in amazon OA
void rearrange(vector<int> &a) {
    vector<int> pos,neg;
    int n=a.size();
    for(auto x:a){
        if(x>=0) pos.push_back(x);
        else neg.push_back(x);
    }
    
    int i=0,j=0,k=0;
    while(i<pos.size() and j<neg.size()){
        a[k++] = pos[i++];
        a[k++] = neg[j++];
    }
    while(i<pos.size())
        a[k++]=pos[i++];
    while(j<neg.size())
        a[k++]=neg[j++];
    
}

int main() {
    vector<int> a = {1, 2, -3, -4, 5, -6, -7, 8, 9, -10};
    rearrange(a);
    for (int x : a) cout << x << " ";
}
