#include <bits/stdc++.h>
#define ll long long int;
#define vec vector<int>;
#define vecstr vector<string>;
#define fast_io              \
  ios_base::sync_with_stdio; \
  cin.tie(0);                \
  cout.tie(0);
using namespace std;
int t, n,temp;

/* Sumedh S Bhat */

int solve(vector<int>& a,int k)
{
  queue<int> q;
  int count=0;
  int tot=0;
  for(auto x:a){
    if(q.size()!=k){
      q.push(x);
      if(x&1==1) count++;
      continue;
    }
    if(count>0) tot++;
    if(q.front()&1==1) count--;
    q.pop();
    if(x&1==1)  count++;
    q.push(x);
  }
  if(count>0) tot++;
  return tot; 
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int n,k;
    vector<int> a;
    for (cin >> n>>k; n > 0; n--)
    {
      cin>>temp;
      a.push_back(temp);
    }
    cout << solve(a,k) << endl;
  }
}