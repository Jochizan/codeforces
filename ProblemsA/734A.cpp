#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int n, A = 0, D = 0;
    cin >> n;
    char ch[n];
    for(int i = 0; i < n; ++i)
        cin >> ch[i];
    for(char c: ch) {
        if(c == 'A')
            A++;
        else
            D++;
    }
    cout << ((D > A)?"Danik":D < A?"Anton":"Friendship") << "\n";
	return 0;
}
