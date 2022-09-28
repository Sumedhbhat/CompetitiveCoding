#
# @lc app=leetcode id=238 lang=python3
#
# [238] Product of Array Except Self
#

# @lc code=start
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = 1
        a = []
        pos = []
        for i in range(len(nums)):
            if nums[i] == 0:
                pos.append(i)
                continue
            product *= nums[i]
        if len(pos) == 0:
            for i in range(len(nums)):
                a.append(int(product/nums[i]))
        elif len(pos) == 1:
            for i in range(len(nums)):
                if i in pos:
                    a.append(product)
                else:
                    a.append(0)
        else:
            a = [0 for i in range(len(nums))]
        return a
# @lc code=end
