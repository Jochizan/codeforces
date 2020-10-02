#include <bits/stdc++.h>

#define db double
#define ld long double
#define ll long long 
#define ar array
#define unmap unordered_map
#define pb push_back
#define pop pop_back
#define lin(x) ll x; cin >> x;
#define endl "\n"
#define FOR(n) for(int i = 0; i < n; ++i)
#define FORL(s, e) for(int i = s; i < e; ++i)
#define FORM(s, e) for(int i = s; i <= e; ++i)
#define EACH(v) for(auto i: v)
#define FORE(i, a, b)for(int i = a; a < b?i < b:i > b; a < b?i++:i--)
#define FMAP(map, it) for(it = map.begin(); it != map.end(); ++it)

bool isprime(int *n){
    for(int i = 2; i*i <= *n;++i)
        if(*n % i == 0)
            return false;
    if(*n == 1)
        return false; 
    return true;
}

using namespace std;

const int mxN = 1e5;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int init = 0;
    int numbers[] = {10,20,30};

    std::cout << "using default accumulate: ";
    std::cout << std::accumulate(numbers,numbers+3,init);
    std::cout << '\n';

    //std::cout << "using functional's minus: ";
    //std::cout << std::accumulate (numbers, numbers+3, init, std::minus<int>());
    //std::cout << '\n';

    //std::cout << "using custom function: ";
    //std::cout << std::accumulate (numbers, numbers+3, init, myfunction);
    //std::cout << '\n';

    //std::cout << "using custom object: ";
    //std::cout << std::accumulate (numbers, numbers+3, init, myobject);
    //std::cout << '\n';
    return 0;
}
