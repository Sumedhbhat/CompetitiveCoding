#
# @lc app=leetcode id=128 lang=python3
#
# [128] Longest Consecutive Sequence
#

# @lc code=start
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        longest = 0
        prev = -2000
        long = 0
        for i in range(len(nums)):
            if prev+1 == nums[i]:
                long += 1
            elif prev == nums[i]:
                continue
            else:
                long = 1
            prev = nums[i]
            if long > longest:
                longest = long
        return longest


# @lc code=end
