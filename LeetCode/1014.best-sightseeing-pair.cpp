#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int maxScoreSightseeingPair(vector<int> &values) {
		const int n = values.size();
		vector<int> prefix(n, 0);
		int maximum = INT_MIN, prev = INT_MIN;
		for (int i = 0; i < n; i++) {
			prefix[i] = values[i] + i;
			if (i != 0) prefix[i] = max(prefix[i - 1], prefix[i]);
		}

		for (int i = n - 1; i >= 0; i--) {
			auto val = values[i] - i;
			val = max(val, prev);
			maximum = max(maximum, prefix[i] + prev);
			prev = val;
		}

		return maximum;
	}
};
// @leet end

int main() {}
