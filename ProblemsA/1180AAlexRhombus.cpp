#include <bits/stdc++.h>

using namespace std;

int main() {
  long long ans = 0;
  int n, i = 1;
  cin >> n;
  n--;
  while(n--) {
    ans += (4 * i);
    i++;
  }
  cout << ans + 1 << "\n";
  return 0;
}
