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

int solve(int a,int b,int c)
{
  int totalNeeded=b*5;
  int survivedDays=a/totalNeeded;
  return survivedDays+c;

}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    cout << solve(a,b,c) << endl;
  }
}