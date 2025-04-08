import java.util.HashMap;
import java.util.Map;
/*
 * @lc app=leetcode id=3396 lang=java
 *
 * [3396] Minimum Number of Operations to Make Elements in Array Distinct
 */

// @lc code=start
class Solution {
    public int minimumOperations(int[] nums) {
        final int n = nums.length;
        Map<Integer, Integer> map = new HashMap<>();
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        int index = 0;
        int operations = 0;
        while (index < n && map.size() < n - index) {
            for (int i = index; i < n && i < index + 3; i++) {
                map.put(nums[i], map.getOrDefault(nums[i], 0) - 1);
                if (map.get(nums[i]) == 0) {
                    map.remove(nums[i]);
                }
            }
            operations++;
            index += 3;
        }
        return operations;
    }
}
// @lc code=end
