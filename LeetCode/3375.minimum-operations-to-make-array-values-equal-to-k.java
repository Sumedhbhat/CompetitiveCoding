import java.util.Set;
import java.util.HashSet;

/*
 * @lc app=leetcode id=3375 lang=java
 *
 * [3375] Minimum Operations to Make Array Values Equal to K
 */

// @lc code=start

class Solution {
    public int minOperations(int[] nums, int k) {
        Set<Integer> set = new HashSet<Integer>();
        boolean equals = false;
        for (int num : nums) {
            set.add(num);
            if (num < k) {
                return -1;
            }
            if (num == k) {
                equals = true;
            }
        }
        if (equals) {
            return set.size() - 1;
        }
        return set.size();
    }
}
// @lc code=end
