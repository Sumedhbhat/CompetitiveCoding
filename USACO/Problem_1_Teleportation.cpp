#include <bits/stdc++.h>
#include <cstdio>
#define ll long long int;
#define vec vector<int>;
#define vecstr vector<string>;
#define fast_io              \
  ios_base::sync_with_stdio; \
  cin.tie(0);                \
  cout.tie(0);
using namespace std;
int t, n;
int a[10000];

/* Sumedh S Bhat */

int solve(int a, int b, int x, int y)
{
  if (x > y)
    swap(x, y);
  if (a > b)
    swap(a, b);
  int m = b - a;
  m = min(m, abs(a - x) + abs(b - y));
}

void scanIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
  scanIO("file teleport");
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  cout << solve(a, b, x, y) << endl;
}