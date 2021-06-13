#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    ll n;
    int i = 0, k;
    cin >> n >> k;
    while(i != k) {
        int r = n % 10;
        if(r != 0)
            n--;
        else
            n /= 10;
        ++i;
    }
    cout << n << "\n";
	return 0;
}
