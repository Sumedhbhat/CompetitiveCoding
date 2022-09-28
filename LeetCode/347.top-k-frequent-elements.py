#
# @lc app=leetcode id=347 lang=python3
#
# [347] Top K Frequent Elements
#

# @lc code=start
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        value = {}
        for i in nums:
            if i in value:
                value[i] += 1
            else:
                value[i] = 1
        ans = []
        a = [[] for i in range(len(nums)+1)]
        for n, c in value.items():
            a[c].append(n)
        for i in range(len(a)-1, 0, -1):
            for n in a[i]:
                ans.append(n)
            if len(ans) == k:
                return ans


# @lc code=end
