#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    vector<pair<int, int>> locs;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int a, b;
        for (int i = 0; i < 3; i++)
        {
            cin >> a >> b;
            locs[i] = {a, b};
        }
        int dist = 1;
        vector<vector<int>> diff = {{locs[0].first - locs[1].first, locs[0].second, locs[1].second}, {locs[0].first - locs[2].first, locs[0].second, locs[2].second}};
        if (diff[0][0] * diff[1][0] > 0)
        {
            dist += min(abs(diff[0][0]), abs(diff[1][0]));
        }
        if (diff[0][1] * diff[1][1] > 0)
        {
            dist += min(abs(diff[0][1]), abs(diff[1][1]));
        }
        cout << dist;
    }

    return 0;
}