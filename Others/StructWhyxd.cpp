template <typename A, typename B>
string to_string(pair<A, B> p);
 
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);
 
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);
 
string to_string(const string& s) {
  return '"' + s + '"';
}
 
string to_string(const char* s) {
  return to_string((string) s);
}
 
string to_string(bool b) {
  return (b ? "true" : "false");
}
 
string to_string(vector<bool> v) {
  bool first = true;
  string res = "{";
  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(v[i]);
  }
  res += "}";
  return res;
}
 
template <size_t N>
string to_string(bitset<N> v) {
  string res = "";
  for (size_t i = 0; i < N; i++) {
    res += static_cast<char>('0' + v[i]);
  }
  return res;
}
 
template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}
 
template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
 
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
 
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}
 
void debug_out() { cerr << endl; }
 
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}
#ifdef KILLBUG
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif
 
 
bool many = false;
struct Solve {
	
	Solve() {
		int n, q;
		cin >> n >> q;
		set<int> p;
		multiset<int> d;
		debug(n);
		auto Add = [&](int x) {
			auto ret = p.insert(x);
			assert(ret.second);
			auto it = ret.first;
			if (next(it) != p.end() && it != p.begin()) {
				d.erase(d.find(*next(it) - *prev(it)));
			}
			if (next(it) != p.end()) {
				d.insert(*next(it) - *it);
			}
			if (it != p.begin()) {
				d.insert(*it - *prev(it));
			}
		};
		
		auto Remove = [&](int x) {
			auto it = p.find(x);
			assert(it != p.end());
			if (next(it) != p.end()) {
				d.erase(d.find(*next(it) - *it));
			}
			if (it != p.begin()) {
				d.erase(d.find(*it - *prev(it)));
			}
			if (next(it) != p.end() && it != p.begin()) {
				d.insert(*next(it) - *prev(it));
			}
			p.erase(it);
		};
		
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			Add(x);
		}
		
		for (int i = 0; i <= q; i++) {
			{
				if (d.empty()) {
					cout << 0 << endl;
				} else {
					int max_p = *prev(p.end());
					int min_p = *p.begin();
					int max_d = *prev(d.end());
					cout << max_p - min_p - max_d << endl;
				}
			}
			if (i == q) break;
			int op, x;
			cin >> op >> x;
			
			if (op == 1) {
				Add(x);
			} else {
				Remove(x);
			}
		}
	}
};
 
signed main() {
#if !defined(KILLBUG)
	FAST_IO;
#endif
	int CASES=1;
	if (many)
		cin >> CASES;
	for (int i = 1; i <= CASES; i++) {
		Solve me;
	}
}
