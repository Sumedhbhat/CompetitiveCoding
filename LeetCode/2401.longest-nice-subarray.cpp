#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int longestNiceSubarray(vector<int> &nums) {
		const int n = nums.size();
		int res = 1;
		int currentRes = 0;
		int currentValue = 0;
		for (int i = 0; i < n; i++) {
			int start = i;
			while (start < n && (currentValue & nums[start]) == 0) {
				currentValue |= nums[start];
				currentRes++;
				start++;
			}
			res = max(currentRes, res);
			currentRes = 0;
			currentValue = 0;
		}
		return res;
	};
};
// @leet end
