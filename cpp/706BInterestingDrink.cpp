#include <iostream>
#include <algorithm>

using namespace std;

const int mxN = 1e5 + 10;
int n, q, arr[mxN], exp[mxN];

int get_count(int x, int y, int v) {
  int middle, res = n + 1;
  while (x <= y) {
    middle = (x + y) / 2;
    if (arr[middle] > v) {
      res = min(res, middle);
      y = middle - 1;
    } else {
      x = middle + 1;
    }
  }

  return res;
}

int main() {

  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }

  cin >> q;
  for (int i = 1; i <= q; ++i) {
    cin >> exp[i];
  }

  sort(arr + 1, arr + n + 1);

  for (int i = 1; i <= q; ++i) {
    int ans = get_count(1, n, exp[i]);
    cout << ans - 1 << '\n';
  }

  return 0;
}
