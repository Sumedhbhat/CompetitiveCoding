// Code by Sumedh S Bhat

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string solution(priority_queue<int> pq, int low)
{
    if (low == pq.top())
        return "YES";
    for (int i = 0; i < 3; i++)
    {
        int top = pq.top();
        pq.pop();
        pq.push(top - low);
        low = min(low, top - low);
        pq.push(low);
        if (pq.top() == low)
            return "YES";
    }
    return "NO";
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        priority_queue<int> pq;
        int low = INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            int n;
            cin >> n;
            low = min(n, low);
            pq.push(n);
        }
        cout << solution(pq, low) << endl;
    }

    return 0;
}