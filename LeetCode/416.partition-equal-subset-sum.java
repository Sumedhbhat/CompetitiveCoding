// @leet start
class Solution {
    public boolean canPartition(int[] nums) {
        int sum = 0;
        final int n = nums.length;
        for (int num : nums)
            sum += num;
        if (sum % 2 != 0)
            return false;
        int target = sum / 2;
        boolean[] dp = new boolean[target + 1];
        dp[0] = true;
        for (int i = 0; i < n; i++) {
            boolean[] newDp = new boolean[target + 1];
            for (int j = 0; j <= target; j++) {
                if (dp[j]) {
                    newDp[j] = true;
                    if (j + nums[i] <= target)
                        newDp[j + nums[i]] = true;
                }
            }
            dp = newDp;
        }
        return dp[target];
    }
}
// @leet end