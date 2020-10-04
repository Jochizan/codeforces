#include <bits/stdc++.h>

#define ll long double
#define lli long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    ll n, m, a;
    cin >> n >> m >> a;
    cout << (lli)(ceil(n / a) * ceil(m/a)) << "\n";
	return 0;
}
