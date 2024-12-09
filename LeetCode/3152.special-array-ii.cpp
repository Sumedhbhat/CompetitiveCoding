#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	vector<bool> isArraySpecial(vector<int> &nums,
	                            vector<vector<int>> &queries) {
		const int n = nums.size();
		const int m = queries.size();
		vector<int> prefix(n);
		vector<bool> answer(m);
		for (int i = 1; i < n; i++) {
			prefix[i] =
			    prefix[i - 1] + (nums[i - 1] % 2 != nums[i] % 2 ? 0 : 1);
		}
		for (int i = 0; i < m; i++) {
			int first = queries[i][0], second = queries[i][1];
			answer[i] = (prefix[second] - prefix[first] == 0);
		}
		return answer;
	}
};
// @leet end

int main() {}
