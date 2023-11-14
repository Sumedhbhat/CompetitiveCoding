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

vector<int> solve(int n[][])
{
  vector<int> ans;
  int difference=0;
  for(int i=3;i>0;i--){
    difference+=n[1]-n[0];
    ans.push_back(difference);
  }
  return ans;
}

int main()
{
  scanIO("file promote");
  // for (cin >> t; t > 0; t--)
  // {
    int n[4][2];
    vector<int> ans;
    for(int i=0;i<4;i++)
    for(int j=0;j<2;j++){
    cin>>n[i][j];
    ans=solve(n);
    for(auto x:ans) cout<<x<<endl;
  }
  // }
}