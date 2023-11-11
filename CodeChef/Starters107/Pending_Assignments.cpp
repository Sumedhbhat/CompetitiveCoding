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

string solve(int a,int b,int c)
{
  if(a*b <=c) return "YES";
  return "NO";
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    c=c*24*60;
    cout << solve(a,b,c) << endl;
  }
}