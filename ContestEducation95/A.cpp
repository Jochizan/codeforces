#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

ll x, y, k, ans;

void solve() {
    cin >> x >> y >> k;
    ll need = (ll)k * (y + 1) - 1;
    ll ans = (need + (x - 2)) / (x - 1) + k;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
