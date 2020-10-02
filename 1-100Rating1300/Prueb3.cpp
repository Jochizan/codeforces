#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array
#define pb push_back
#define pop pop_back
#define endl "\n"
#define FOR(n) for(int i = 0; i < n; ++i)
#define FORL(s, e) for(int i = s; i < e; ++i)
#define FORM(s, e) for(int i = s; i <= e; ++i)
#define EACH(v) for(auto i: v)
//#define FORM(map, it) for(it = map.begin(); it != map.end(); ++it)
//#define unmap unordered_map<char, int>
//#define map map<int, int>
//#define sn set<int>

using namespace std;

const int mxN = 1e5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s, c;
    cin >> s >> c;
    int n = s.size();
    int m = c.size();
    int cont = 0;
    FOR(n) {
        if(s[i] != c[i])
            cont++;
        if(cont > 2)
            break;
    }
    cout << cont << " " << n << endl;
    if(cont == 2 && n == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
