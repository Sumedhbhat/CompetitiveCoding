#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> a)
{
  for (int i = 0; i < n; i++)
    if (a[i] >= n)
      return a[i];
  return 0;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a = {111, 212, 122, 313, 133, 224, 414, 144, 515, 155, 326, 236, 616, 166, 717, 177, 428, 248, 818, 188, 339, 199, 919, 600, 500, 100, 200, 300, 400, 700, 800, 900};
  sort(a.begin(), a.end());
  cout << solve(n, a) << endl;
  return 0;
}