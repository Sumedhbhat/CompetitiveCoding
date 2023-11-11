#include <bits/stdc++.h>

using namespace std;

string solve(int n, int m)
{
  if (n > m and n - m <= 3)
    return "Yes";
  else if (n < m and m - n <= 2)
    return "Yes";
  return "No";
}

int main()
{
  int n, m;
  cin >> n >> m;
  cout << solve(n, m) << endl;
  return 0;
}