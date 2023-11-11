#include <bits/stdc++.h>

using namespace std;

int solve(int m, vector<int> a)
{
  int mx = 1;
  int i = 0, j = 0;
  while (j < a.size())
  {
    while (j < a.size() and a[j] - a[i] < m)
    {
      j++;
    }
    mx = max(mx, j - i);
    i++;
    if (i == j)
      j = i + 1;
  }
  return mx;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  cout << solve(m, a);
  return 0;
}