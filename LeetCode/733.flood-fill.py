#
# @lc app=leetcode id=733 lang=python3
#
# [733] Flood Fill
#

# @lc code=start
class Solution:
    visited=[[0]*50]*50
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        self.m=len(image)
        self.n=len(image[0])
        traverse={[sr,sc]}
        while(traverse):
            i,j=traverse.pop()
            

# @lc code=end

