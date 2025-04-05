#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define nl endl

int main() {
    vector<vector<int>> a = {{3,49},{23,44},{21,56},{26,55},{23,52},{2,9},{1,48},{3,31}};

    sort(all(a));

    for (auto &x : a) cout << x[0] << " " << x[1] << nl;
    
    return 0;
}
