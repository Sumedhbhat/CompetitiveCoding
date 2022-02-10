/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=-1,right=-1,len=nums.size();
        vector<int> a;
        for (int i=0;i<len;i++){
            if(nums[i]<0){
                left=i;
            }else if (nums[i]==0 && right==-1){
                right=i;
            }
            nums[i]*=nums[i];
        }
        if (right==-1 && left==-1){
            return nums;
        }else if(right==-1 && left!=-1){
            right=left+1;
        }
        for (int i=0;i<len;i++){
            if (left==-1){
                a.push_back(nums[right]);
                right+=1;
            }
            else if(right==len){
                a.push_back(nums[left]);
                left-=1;
            }
            else if(nums[left]<nums[right]){
                a.push_back(nums[left]);
                left-=1;
            }else{
                a.push_back(nums[right]);
                right+=1;
            }
        }
        return a;
    }
};
// @lc code=end

