#include <__std_clang_module>
using namespace std;

/*
 * @lc app=leetcode id=2570 lang=cpp
 *
 * [2570] Merge Two 2D Arrays by Summing Values
 */

// @lc code=start
class Solution {
  public:
	vector<vector<int>> mergeArrays(vector<vector<int>> &nums1,
	                                vector<vector<int>> &nums2) {
		const int maxSize = 1001;
		vector<int> holder(maxSize + 1);
		for (auto x : nums1) { holder[x[0]] += x[1]; }
		for (auto x : nums2) { holder[x[0]] += x[1]; }
		vector<vector<int>> ans;
		for (int i = 0; i < maxSize + 1; i++) {
			if (holder[i] != 0) { ans.push_back({i, holder[i]}); }
		}
		return ans;
	}
};
// @lc code=end
