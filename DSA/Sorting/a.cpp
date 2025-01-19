#include <bits/stdc++.h>
using namespace std;

string findNumber(vector<int>& a) {    
    while(a.size()>2){
        vector<int> ans;
        for(int i=0;i+1<a.size();i++){
            int x=(a[i]+a[i+1])%10;
            ans.push_back(x);
        }
        a=ans;
    }
    return to_string(a[0])+to_string(a[1]);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
        
    
    cout << findNumber(a) << endl;
    return 0;
}
