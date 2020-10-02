#include <bits/stdc++.h>

#define db double
#define ld long double
#define ll long long 
#define ar array
#define unmap unordered_map
#define mp make_pair
#define pb push_back
#define pop pop_back
#define F first
#define S second
#define B begin
#define E end
#define lin(x) ll x; cin >> x;
#define endl "\n"
#define mod 1e9 + 7
#define stv(v) sort(v.begin(),v.end())
#define FOR(n) for(int i = 0; i < n; ++i)
#define FORL(s, e) for(int i = s; i < e; ++i)
#define FORM(s, e) for(int i = s; i <= e; ++i)
#define EACH(v) for(auto i: v)
#define FORE(i, a, b)for(int i = a; a < b?i < b:i > b; a < b?++i:--i)
#define FORS(i, j, k, step) for (int i=j; i<k; i+=step)
#define RFORS(i, j, k, step) for (int i=j; i>=k; i-=step)
#define FMAP(map, it) for(it = map.begin(); it != map.end(); ++it)
#define FIO ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL) 

using namespace std;

ll dx1[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll dy1[] = {0, 1, 1, 1, 0, -1, -1, -1};
 
ll dx2[] = {1, 0, -1, 0};
ll dy2[] = {0, 1, 0, -1};
 
ll mul(ll a, ll b, ll p = mod) {return ((a % p) * (b % p)) % p;}
ll add(ll a, ll b, ll p = mod) {return (a % p + b % p) % p;}
ll power(ll x,ll y,ll p = mod) 
{ 
    ll res = 1;
    x = x % p;
    while (y > 0) 
    {
        if (y & 1) 
            res = (res*x) % p;
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
ll modInverse(ll n, ll p = mod)
{
    return power(n, p - 2, p);
}
ll ncrMod(ll n, ll r, ll p = mod)
{
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (ll i = 1 ; i <= n; i++)
        fac[i] = fac[i - 1] * i % p;
    return (fac[n] * modInverse(fac[r], p) % p *
            modInverse(fac[n - r], p) % p) % p;
}
 
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
 
long long operator "" _m(unsigned long long literal) {
    return literal;
}

long double operator "" _cm(unsigned long long literal) {
    return literal / 100.0;
}

long long operator "" _km(unsigned long long literal) {
    return literal * 1000;
}

void printv(vector<ll> v) {
    ll sz = v.size();
    for(ll i = 0; i < sz; ++i) {
        if (i == sz - 1)
            cout << v[i] << "\n";
        else
            cout << v[i] << " ";
    }
}

bool isPrime(int n) {
    for(int i = 2; i*i <= n; ++i)
        if(n % i == 0)
            return false;
    if(n == 1)
        return false; 
    return true;
}

void READV(vector<int>& v, int n){
    int tmp;
    FOR(n) {
        cin >> tmp;
        v.pb(tmp);
    }
}

const int mxN = 1e5;
const double PI = 3.141592653589793238;

void solve() {
    cout << fixed << setprecision(7);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
