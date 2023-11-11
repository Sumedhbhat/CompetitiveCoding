#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long solution(long size, long water, vector<long> tank)
{
    sort(tank.begin(), tank.end());
    long cur = 0;
    long maxHeight = tank[0];
    long i = 0;
    for (i = 0; i < size - 1; i++)
    {
        if (cur + ((tank[i + 1] - tank[i]) * (i + 1)) > water)
            break;
        cur += (tank[i + 1] - tank[i]) * (i + 1);
        maxHeight = tank[i + 1];
    }
    long leftOver = (long)((water - cur) / (i + 1));
    if (leftOver > 0)
        maxHeight += (long)leftOver;
    return maxHeight;
}

int main()
{
    long t;
    cin >> t;

    for (long i = 0; i < t; i++)
    {
        long size, water;
        cin >> size >> water;
        vector<long> tank(size, 0);
        for (long i = 0; i < size; i++)
            cin >> tank[i];
        // cout << "Ans " << i << " " << solution(size, water, tank) << endl;
        cout << solution(size, water, tank) << endl;
    }

    return 0;
}