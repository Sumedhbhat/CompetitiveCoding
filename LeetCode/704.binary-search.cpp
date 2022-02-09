/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right=nums.size()-1,left=0;
        
        while(left<=right){
            int mid=(left+right)/2;
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]>target){
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }
        return -1;
    }
};
// @lc code=end

