#include <bits/stdc++.h>
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

string solve(vector<int> a)
{
  int sum = 0;
  for (auto x : a)
    sum += x;
  sum /= a.size();
  sort(a.begin(), a.end(), [&](int x, int y)
       { return x > y; });
  for (auto x : a)
  {
    if (abs(sum - x) % 2 != 0)
      return "No";
  }
  return "Yes";
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int n;
    vector<int> a;
    for (cin >> n; n > 0; n--)
    {
      int m;
      cin >> m;
      a.push_back(m);
    }
    cout << solve(a) << endl;
  }
}