#
# @lc app=leetcode id=695 lang=python3
#
# [695] Max Area of Island
#

# @lc code=start
class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        self.grid=grid
        self.m=len(grid)
        bestlen=0
        self.n=len(grid[0])
        for i in range(self.m):
            for j in range(self.n):
                curlen=self.maxArea(i,j)
                if curlen>bestlen:
                    bestlen=curlen
        return bestlen
    def maxArea(self,i:int,j:int,curlen:int=0)->int:
        if self.grid[i][j]==1:
            curlen=curlen+1
            self.grid[i][j]=0
            if i>=1 :curlen=self.maxArea(i-1,j,curlen)
            if i<self.m-1 :curlen=self.maxArea(i+1,j,curlen)
            if j>=1 :curlen=self.maxArea(i,j-1,curlen)
            if j<self.n-1 :curlen=self.maxArea(i,j+1,curlen)
        return curlen

# @lc code=end

