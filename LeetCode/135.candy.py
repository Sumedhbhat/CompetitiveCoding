#
# @lc app=leetcode id=135 lang=python3
#
# [135] Candy
#

# @lc code=start
class Solution:
    def candy(self, ratings: List[int]) -> int:
        ans=[1 for x in range(len(ratings))] 
        for i in range(len(ratings)-1):
            if ratings[i+1]>ratings[i] and ans[i+1]<=ans[i]:
                ans[i+1] =1+ans[i]
        for i in range(len(ratings)-1,0,-1):
            if ratings[i-1]>ratings[i] and ans[i-1]<=ans[i]:
                ans[i-1] =1+ans[i]
        return sum(ans)
# @lc code=end

