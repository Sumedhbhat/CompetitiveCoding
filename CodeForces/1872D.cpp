#include <bits/stdc++.h>

using namespace std;

long long solve(long long n, long long a, long long b)
{
  long long gcd = __gcd(a, b);
  long long lcm = (a * b) / gcd;
  long long a1 = n / a;
  long long b1 = n / b;
  long long lcm1 = n / lcm;
  a1 -= lcm1;
  b1 -= lcm1;
  long long sum = 0;
  sum += (((n) * (n + 1)) / 2) - (((n - a1) * (n - a1 + 1)) / 2);
  sum -= (((b1) * (b1 + 1)) / 2);
  return sum;
}

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    long long a, b, n;
    cin >> n >> a >> b;
    long long ans = solve(n, a, b);
    cout << endl
         << "Ans " << i + 1 << " " << ans << endl;
  }
}