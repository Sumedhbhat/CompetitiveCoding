#include <__std_clang_module>
#include <unordered_set>

using namespace std;

/*
 * @lc app=leetcode id=3371 lang=cpp
 *
 * [3371] Identify the Largest Outlier in an Array
 */

// @lc code=start
class Solution {
  public:
	int getLargestOutlier(vector<int> &nums) {
		unordered_map<int, int> freq;
		int totalSum = 0;
		int outlier = INT_MIN;
		for (auto x : nums) {
			freq[x]++;
			totalSum += x;
		}
		for (auto x : nums) {
			int current = totalSum - x;
			if (current % 2 != 0) continue;
			current /= 2;
			freq[x]--;
			if (freq[current] > 0) outlier = max(outlier, x);
			freq[x]++;
		}
		return outlier;
	}
};
// @lc code=end
