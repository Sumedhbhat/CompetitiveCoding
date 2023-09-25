#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=778 lang=cpp
 *
 * [778] Swim in Rising Water
 */

// @lc code=start
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
       priority_queue<pair<int,pair<int,int>>> pq; 
        pq.push({-1*grid[0][0],{0,0}});
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        while(!pq.empty()){
            int time=-1*pq.top().first;
            pair<int,int>coords=pq.top().second;
            int i=coords.first;
            int j=coords.second;
            pq.pop();
            if(i==grid.size()-1 and j==grid[0].size()-1) return time;
            if (coords.first<0 or coords.first>grid.size()-1 or coords.second<0 or coords.second>grid[0].size()-1 or visited[coords.first][coords.second]) continue;
            pq.push({-1*max(time,grid[i-1][j]),{i-1,j}});
            pq.push({-1*max(time,grid[i+1][j]),{i+1,j}});
            pq.push({-1*max(time,grid[i][j-1]),{i,j-1}});
            pq.push({-1*max(time,grid[i][j+1]),{i,j+1}});
        }
        return 0;
    }
};
// @lc code=end

