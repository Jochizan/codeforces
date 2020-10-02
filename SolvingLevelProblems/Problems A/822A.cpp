#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll A, B, ans = 1, mn;
    cin >> A >> B;
    mn= min(A, B);
    for(ll i = 1; i <= mn; ++i)
        ans *= i;
    cout << ans << "\n";
    return 0;
}
