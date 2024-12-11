#include <__std_clang_module>
#include <algorithm>
using namespace std;

// @leet start
class Solution {
  public:
	int maximumBeauty(vector<int> &nums, int k) {
		int maxCount = 1;
		if (nums.size() == 1) return 1;
		int maximum = *max_element(nums.begin(), nums.end()) + 1;
		vector<int> count(maximum + 1, 0);
		for (auto x : nums) {
			count[max(0, x - k)]++;
			count[min(x + k + 1, maximum)]--;
		}
		int currentValue = 0;
		for (auto x : count) {
			currentValue += x;
			maxCount = max(maxCount, currentValue);
		}
		return maxCount;
	}
};
// @leet end

int main() {}
