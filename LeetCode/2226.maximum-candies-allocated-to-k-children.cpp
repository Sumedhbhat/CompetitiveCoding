#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int maximumCandies(vector<int> &candies, long long k) {
		const int n = candies.size();
		priority_queue<int> pq;
		int res = 0;
		int maxValue = 0;
		for (int i = 0; i < n; i++) { maxValue = max(maxValue, candies[i]); }

		long long left = 1, right = maxValue;
		while (left <= right) {
			long long mid = left + (right - left) / 2;
			long long count = 0;
			for (int i = 0; i < n; i++) count += candies[i] / mid;
			if (count >= k) {
				res = mid;
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}
		return res;
	}
};
// @leet end
