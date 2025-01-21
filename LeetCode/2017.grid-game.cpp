#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	long long gridGame(vector<vector<int>> &grid) {
		const int n = grid[0].size();
		long long rowSum = 0, secondSum = 0;
		for (int i = 0; i < n; i++) { rowSum += grid[0][i]; }
		long long res = LLONG_MAX;
		for (int i = 0; i < n; i++) {
			rowSum -= grid[0][i];
			res = min(res, max(rowSum, secondSum));
			secondSum += grid[1][i];
		}
		return res;
	};
};
// @leet end

int main() {}
