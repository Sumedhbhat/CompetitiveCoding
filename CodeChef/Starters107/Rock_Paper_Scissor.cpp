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

int solve(string s,string t,int n)
{
  int count=0;
  for(int i=0;i<n;i++){
    if(s[i]==t[i]) continue;
    else if((s[i]=='R' and t[i]=='S') or (s[i]=='P' and t[i]=='R') or (s[i]=='S' and t[i]=='P')) count--;
    else count++;
  }
  if(count<0) return 0;
  else if(count==0) return 1;
  else return count;
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int n;
    string s,t;
    cin>>n>>s>>t;
    cout << solve(s,t,n) << endl;
  }
}