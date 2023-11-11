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

vector<int> solve(int n)
{
    vector<int> ans;
    for(cin>>n;n>0;n--){
      ans.push_back(n);
    }
  return ans; 
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int n;
    vector<int> ans=solve(n);
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
  }
}