#
# @lc app=leetcode id=26 lang=python3
#
# [26] Remove Duplicates from Sorted Array
#

# @lc code=start
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        remove=[]
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                remove.append(i-1) 
                
        for i in remove[::-1]:
            del nums[i]
# @lc code=end

