#include <bits/stdc++.h>
 
#define db double
#define ar array
 
using namespace std;
 
typedef unsigned long long ll;
 
int n, m;
 
void solve() {
    int dp[1000];
    int up[1000];
    for(int i = 0; i < m; ++i)
        cin >> dp[i];
    sort(dp, dp + m);
    for(int i = 0; i < m; ++i)
        up[i] = dp[i];
    int udp = 0;
    int wdp = 0;
    int cont = 0;
    for(int i = 0; i < m; ++i) {
        if(cont == n)
            break;
        cont++;
        wdp += dp[i];
        dp[i]--;
        if(dp[i] > 0)
            i--;
    }
    cont = 0;
    for(int i = m-1; i >= 0; --i) {
        if(cont == n)
            break;
        cont++;
        udp += up[i];
        up[i]--;
        if(up[i] >= up[i-1]) {
            swap(dp[i], dp[i-1]);
            ++i;
        }
    }
    cout << udp << " " << wdp << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> m;
    solve();
    return 0;
}
