int main() {
  vector<int> v = {1, 2, 3, 4};
  vector<int> w = move(v);

  cout << "v: ";
  for (auto i: v)
    cout << i << ' ';

  cout << "\nw: ";
  for (auto i: w)
    cout << i << ' ';
  auto f = [] (int a, int b) -> int { return a + b; };
  cout << f(1, 2); // prints "3"
  Se puede utilizar en lambdas for_each, sorty muchas más funciones STL:

    vector<int> v = {3, 1, 2, 1, 8};
  sort(begin(v), end(v), [] (int a, int b) { return a > b; });
  for (auto i: v) cout << i << ' ';       cout << i << ' ';   // See results in meter:
  // ;
  tuple<int, int, int, char> t (3, 4, 5, 'g');
  int a, b;
  tie(b, ignore, a, ignore) = t;
  cout << a << ' ' << b << '\n';
  ...
    cout << 250_m << " meters \n"; // Prints 250 meters
  cout << 12_km << " meters \n"; // Prints 12000 meters
  cout << 421_cm << " meters \n"; // Prints 4.21 meters
  // ;
  string str = "Hello\tWorld\n";
  string r_str = R"(Hello\tWorld\n)";
  cout << str << r_str;
  //Salida:
  //Hello	World
  //Hello\tWorld\n
  pair<int, int> p;
  // ...
  p = {3, 4};
  incluso un mas complejo pair

    pair<int, pair<char, long long> > p;
  // ...
  p = {3, {'a', 8ll}};
  ¿Qué pasa con vector, deque, sety otros recipientes?

    vector<int> v;
  v = {1, 2, 5, 2};
  for (auto i: v)
    cout << i << ' ';
  cout << '\n';
  // prints "1 2 5 2"

  deque<vector<pair<int, int>>> d;
  d = {{{3, 4}, {5, 6}}, {{1, 2}, {3, 4}}};
  for (auto i: d) {
    for (auto j: i)
      cout << j.first << ' ' << j.second << '\n';
    cout << "-\n";
  }
  pair<int, int> p;
  vector<int> v;
  // ...
  p = make_pair(3, 4);
  v.push_back(4); v.push_back(5);

  mientras que puedes hacer esto...

    pair<int, int> p;
  vector<int> v;
  // ...
  p = {3, 4};
  v = {4, 5};
  set<int> s;
  s = {4, 6, 2, 7, 4};
  for (auto i: s)
    cout << i << ' ';
  cout << '\n';
  // prints "2 4 6 7"

  list<int> l;
  l = {5, 6, 9, 1};
  for (auto i: l)
    cout << i << ' ';
  cout << '\n';
  // prints "5 6 9 1"

  array<int, 4> a;
  a = {5, 8, 9, 2};
  for (auto i: a)
    cout << i << ' ';
  cout << '\n';
  // prints "5 8 9 2"

  tuple<int, int, char> t;
  t = {3, 4, 'f'};
  cout << get<2>(t) << '\n';
  ....
    set<int> s = {8, 2, 3, 1};
  for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    cout << *it << ' ';
  // prints "1 2 3 8"
  Créame, eso es mucho código para eso, solo use esto:

    set<int> s = {8, 2, 3, 1};
  for (auto it: s)
    cout << it << ' ';
  // prints "1 2 3 8"
  vector<int> v = {8, 2, 3, 1};
  for (auto &it: v)
    it *= 2;
  for (auto it: v)
    cout << it << ' ';
  // prints "16 4 6 2"
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= m; j++)
      cout << a[i][j] << " ";
    cout << "\n";
  }
  es equivalente a esto:
    for(i = 1; i <= n; i++)
      for(j = 1; j <= m; j++)
        cout << a[i][j] << " \n"[j == m];
  return 0;
}
