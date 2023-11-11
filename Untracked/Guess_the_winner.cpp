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

int solve(int n)
{
  while (n & 1 == 0)
    n >> 1;
  for (auto i = 3; i <= sqrt(n); i += 2)
  {
    if(n%i!=0) continue;
    while (n % i == 0)
      n /= i;
    
  }
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int n;
    cin >> n;
    cout << solve(n) << endl;
  }
}