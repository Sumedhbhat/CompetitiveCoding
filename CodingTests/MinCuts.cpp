#include <bits/stdc++.h>

using namespace std;

int minCuts(vector<int>);

int main()
{
  int a;
  char b[50], find;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    cin >> b[i];
  }
  cin >> find;
  vector<int> poss;
  for (int i = 0; i < a; i++)
  {
    if (b[i] == find)
    {
      poss.push_back(i);
      cout << b[i];
    }
  }
  cout << endl
       << minCuts(poss) << endl;
  return 0;
}

int minCuts(vector<int> pos)
{
  int left = 0, right = pos.size(), m, sum = 0;
  int mid = (*pos.end() + *pos.begin()) / 2;
  while (left < right)
  {
    m = (left + right) / 2;
    if (pos[m] > mid)
    {
      left = m + 1;
    }
    else
    {
      right = m - 1;
    }
  }
  cout << pos[m] << endl;
  for (int i = 0; i < pos.size(); i++)
  {
    cout << pos[i];
    pos[i] -= pos[m];
    cout << abs(pos[i]) << endl;
    sum += abs(pos[i]);
  }
  return sum;
}