// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem35.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right=(int)nums.size()-1,mid,ans=-1;
        while(left<=right){
            mid=(left+right)/2;
            if (nums[mid]==target)
                return mid;
            if (nums[mid]>target){
                right=mid-1;
                ans=mid;                
            }
            else{
                left=mid+1;
                ans=mid+1;
            } 
        }
        return ans;
    }
};
// @lc code=end

