// Code by Sumedh S Bhat

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int solution(string s, string t, int n, int m)
{
    int count = 0;
    while (n < m)
    {
        count++;
        s += s;
        n += n;
    }
    if (s.find(t) != string::npos)
        return count;
    s += s;
    if (s.find(t) != string::npos)
        return count + 1;
    else
        return -1;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m;
        string s, t;
        cin >> n >> m >> s >> t;
        // cout << "Ans " << i << " " << solution(s, t, n, m) << endl;
        cout << solution(s, t, n, m) << endl;
    }

    return 0;
}