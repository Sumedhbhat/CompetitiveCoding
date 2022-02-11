#
# @lc app=leetcode id=167 lang=python3
#
# [167] Two Sum II - Input Array Is Sorted
#

# @lc code=start
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        val=int(target/2)
        left,right,mid=0,len(numbers),0
        length=right
        while left<=right:
            print(left," ",right," ",mid)
            mid=int((left+right)/2)
            if numbers[mid]<val:
                left=mid+1
            else: right=mid-1
        right=left
        while left>=0 and right<length:
            sum=numbers[left]+numbers[right]
            if sum==target and left!=right:
                return [left+1,right+1]
            elif sum>target: 
                left-=1
            else: right+=1
            print(left," ",right)
# @lc code=end

