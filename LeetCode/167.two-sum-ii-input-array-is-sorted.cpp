/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size(),i,j;
        vector<int> a(2,0);
        for (i=0;i<len;i++){
            for (j=i+1;j<len;j++){
                int sum=nums[i]+nums[j];
                if (sum==target){
                    a[0]=i+1;
                    a[1]=j+1;
                    return a;
                }else if (sum>target){
                    continue;
                }
            }
        }
        return a;
    }
};
// @lc code=end

