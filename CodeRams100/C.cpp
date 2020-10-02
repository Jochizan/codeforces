#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
    cin >> n;
    vector<int> ar(n);
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        cin >> ar[i];
        ans += ar[i]*3;
    }
    cout << ans << endl;
	return 0;
}
