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

string solve(string s, int n, int k)
{
  string ans = "";
  int i = 0;
  cout << "Reached Here" << endl;
  while (n-- != 0)
  {
    string word = "";
    int sentenceLength = 0;
    int wordLen = 0;
    cout << ans << word << sentenceLength << endl;
    while (i != s.length() and s[i] != ' ')
    {
      word += to_string(s[i]);
      wordLen++;
      i++;
    }
    if (sentenceLength + wordLen > k)
      ans += "\n" + word;
    else if (ans == "")
      ans += word;
    else
      ans += " " + word;
    sentenceLength += wordLen;
    i++;
    wordLen = 0;
    word = "";
  }
  return ans;
}

int main()
{
  // scanIO("word processor");
  // for (cin >> t; t > 0; t--)
  // {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  cout << solve(s, n, k) << endl;
  // }
}