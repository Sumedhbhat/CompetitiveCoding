#include <__std_clang_module>
#include <algorithm>
using namespace std;

// @leet start
class Solution {
  public:
	long long maxMatrixSum(vector<vector<int>> &matrix) {
		int minimum = INT_MAX;
		bool countNegative = true;
		long long sum = 0;
		for (auto x : matrix)
			for (auto &y : x) {
				if (y < 0) countNegative = !countNegative;
				y = abs(y);
				sum += y;
				minimum = min(minimum, y);
			}
		if (countNegative || minimum == 0) return sum;
		return sum - 2 * minimum;
	};
};
// @leet end

int main() {}
