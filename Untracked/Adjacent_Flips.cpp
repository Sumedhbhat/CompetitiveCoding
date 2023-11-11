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

string solve(int n,string s)
{
  int ev1=0,od1=0,ev0=0,od0=0;
  for(int i=0;i<n;i+=2){
    if(s[i]=='1') ev1++;
    else ev0++;
  }
  
  for(int i=1;i<n;i+=2){
    if(s[i]=='1') od1++;
    else od0++;
  }
  if(ev1==od1 or ev0==od0) return "Yes";
  else return "No";
}

int main()
{
  for (cin >> t; t > 0; t--)
  {
    int n;
    string s;
    cin>>n>>s;
    cout<<solve(n,s)<<endl;
  }
}