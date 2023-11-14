#include <bits/stdc++.h>
#define ll long long int;
#define fast_io                                                                \
  ios_base::sync_with_stdio;                                                   \
  cin.tie(0);                                                                  \
  cout.tie(0);

using vi = vector<int>;
using vs = vector<string>;
using pi = pair<int, int>;

#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

#define first f;
#define second s;
#define make_pair mp;
using namespace std;
int t, n;
int a[10000];

/* Sumedh S Bhat */

void scanIO(string s = "") {
  fast_io;
  if (sz(s)) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

vs solve(vs in) {
  int i1, j1, i2, j2;
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++) {
      switch (in[i][j]) {
      case 'B':
        i1 = i;
        j1 = j;
        break;
      case 'L':
        i2 = i;
        j2 = j;
        break;
      }
    }
  while (i2 == i1 and j2 == j1) {
    while ()
  }
}

int main() {
  scanIO("file buckets");
  // for (cin >> t; t > 0; t--)
  // {
  vs in(10);
  for (int i = 0; i < 10; i++)
    cin >> in[i];
  vs ans = solve(in);
  for (auto x : ans)
    cout << x << endl;
  // }
}