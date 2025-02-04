#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int maxAscendingSum(vector<int> &nums) {
		const int n = nums.size();
		int maxSum = nums[n - 1];
		int currentSum = nums[n - 1];
		for (int i = n - 2; i >= 0; i--) {
			if (nums[i] >= nums[i + 1]) { currentSum = 0; }
			currentSum += nums[i];
			maxSum = max(maxSum, currentSum);
		}
		return maxSum;
	}
};
// @leet end
