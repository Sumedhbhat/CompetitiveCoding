#
# @lc app=leetcode id=695 lang=python3
#
# [695] Max Area of Island
#

# @lc code=start
class Solution:
    curBest=0
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        maxBest=0
        self.grid=grid
        self.m,self.n=len(grid),len(grid[0])
        while(1):
            i=self.find(self.grid)
            if(i!=-1):
                self.curBest=self.maxArea(i)
                if self.curBest>maxBest:
                    maxBest=self.curBest
            else: break
        return maxBest
    def maxArea (self,index,curBest:int =0)->int:
        self.curBest+=1
        i,j=index
        self.grid[i][j]=0
        if i>=1 and self.grid[i-1][j]==1: self.maxArea([i-1,j],self.curBest)
        if i<self.m-1 and self.grid[i+1][j]==1: curBest =self.maxArea([i+1,j],self.curBest)
        if j>=1 and self.grid[i][j-1]==1:curBest=self.maxArea([i,j-1],self.curBest)
        if j<self.n-1 and self.grid[i][j+1]==1:curBest=self.maxArea([i,j+1],self.curBest)
        return curBest
    def find(self,g):
        for i in range(self.m):
            for j in range(self.n):
                if g[i][j]==1:
                    return [i,j]
        return -1
# @lc code=end

