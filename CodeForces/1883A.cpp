// Code by Sumedh S Bhat

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int solution(string s)
{
  int initial = 1;
  int sum = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '0')
    {
      sum += abs(10 - initial);
      initial = 10;
    }
    else
    {
      sum += abs((s[i] - '0') - initial);
      initial = s[i] - '0';
    }
    sum++;
  }
  return sum;
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    string s;
    cin >> s;
    cout << endl
         << "Ans " << i + 1 << " " << solution(s) << endl;
  }

  return 0;
}