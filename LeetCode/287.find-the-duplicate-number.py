#
# @lc app=leetcode id=287 lang=python3
#
# [287] Find the Duplicate Number
#

# @lc code=start
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        m=[i for i in range(1,len(nums)+2)]
        for i in nums:
            if m[i]==0:
                return i
            else: m[i]=0
        return -1
# @lc code=end

