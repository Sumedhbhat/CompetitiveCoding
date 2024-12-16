#include <__std_clang_module>
#include <functional>
#include <queue>
using namespace std;

// @leet start
class Solution {
  public:
	vector<int> getFinalState(vector<int> &nums, int k, int multiplier) {
		const int n = nums.size();
		priority_queue<pair<int, int>, vector<pair<int, int>>,
		               greater<pair<int, int>>>
		    heap;
		for (int i = 0; i < n; i++) heap.push({nums[i], i});
		for (int i = 0; i < k; i++) {
			auto [number, index] = heap.top();
			nums[index] *= multiplier;
			heap.pop();
			heap.push({nums[index], index});
		}
		return nums;
	}
};
// @leet end

int main() {}
