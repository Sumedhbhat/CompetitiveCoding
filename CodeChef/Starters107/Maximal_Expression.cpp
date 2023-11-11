#include <bits/stdc++.h>
#define ll long long int;
#define vec vector<int>;
#define vecstr vector<string>;
#define fast_io              \
  ios_base::sync_with_stdio; \
  cin.tie(0);                \
  cout.tie(0);
using namespace std;
int t;
int a[10000];

/* Sumedh S Bhat */

int solve(int n,int k)
{
  int num=(n % k)/2;
  int x=n-num;
  int ans=x*num;
  if(k<=n){
    int num1=((n+k)%k)/2;
    int x1=n-num1;
    ans=max(ans,x1*num1);
    if(ans==x1*num1) {
      x=x1;
      num=num1;
    }
  }
  return min(x,num);
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
  }
}