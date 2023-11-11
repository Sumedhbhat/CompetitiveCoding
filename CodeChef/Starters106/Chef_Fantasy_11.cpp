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

/* Sumedh S Bhat */

int solve(int a)
{
  return a*(a-1);
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    cin>>n;
    cout << solve(n) << endl;
  }
}