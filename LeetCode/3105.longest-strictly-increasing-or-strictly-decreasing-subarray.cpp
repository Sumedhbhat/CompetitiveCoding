#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int longestMonotonicSubarray(vector<int> &nums) {
		const int n = nums.size();
		int counter = 1, res = 1;
		for (int i = n - 1; i > 0; i--) {
			if (nums[i] > nums[i - 1]) counter++;
			else counter = 0;
			res = max(res, counter);
		}

		counter = 1;
		for (int i = n - 1; i > 0; i--) {
			if (nums[i] < nums[i - 1]) counter++;
			else counter = 1;
			res = max(res, counter);
		}
		return res;
	}
};
// @leet end

int main() {}
