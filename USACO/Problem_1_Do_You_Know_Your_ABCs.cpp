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

void scanIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

vector<int> solve(vector<ll> n)
{
  int first,second,third;
  auto m1=min_element(n.begin(),n.end());
  first=m1;
  *m1=INT_MAX;
  auto m1=min_element(n.begin(),n.end());
  second=m1;
  *m1=INT_MAX;
  auto m=max_element(n.begin(),n.end());
  third=*m-first-second;
  vector<int> ans={first,second,third};
}

int main()
{
  // scanIO("");
  // for (cin >> t; t > 0; t--)
  // {
    vector<ll> input(7);
    for(int i=0;i<7;i++) cin>>input[i];
    vector<int> ans=solve(input);
    for(auto x:ans) cout<<x<<endl;
  // }
}