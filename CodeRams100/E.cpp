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
    cout << ((n % 15 == 0)?"FizzBuzz":(n % 3 == 0)?"Fizz":(n % 5 == 0)?"Buzz":"") << endl;
	return 0;
}
