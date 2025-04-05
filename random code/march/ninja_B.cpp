#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int powm(int x, int n, int m){
    ll ans = 1;
    x = x % m;
    while(n > 0){
        if(n & 1)
            ans = (ans *x) % m;
        x = ((ll)x * x) % m; // to make sure that x*x doesn't overflow
        n /= 2;
    }
    return (int)ans;
}


void solve(){
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    ll ans = 1;
    for (int i = 0; i < n; i++){
        int p = min({i + 1, n - i, k, n - k + 1});
        ans = (ans * powm(a[i], p, m)) % m;
    }
    cout << (int)ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}
