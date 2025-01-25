#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	vector<int> lexicographicallySmallestArray(vector<int> &nums, int limit) {
		const int n = nums.size();
		priority_queue<pair<int, int>, vector<pair<int, int>>,
		               greater<pair<int, int>>>
		    pq;
		for (int i = 0; i < n; i++) { pq.push({nums[i], i}); }
		deque<pair<int, int>> dq;
		vector<int> res(n, 0);
		priority_queue<int, vector<int>, greater<int>> indexStore;
		while (!pq.empty()) {
			auto [val, idx] = pq.top();
			pq.pop();
			while (!dq.empty() && val - dq.back().first > limit) {
				int smallestIndex = indexStore.top();
				indexStore.pop();
				res[smallestIndex] = val;
				dq.pop_front();
			}
			indexStore.push(idx);
			dq.push_back({idx, val});
		}
		while (!dq.empty()) {
			int smallestIndex = indexStore.top();
			indexStore.pop();
			res[smallestIndex] = dq.front().second;
			dq.pop_front();
		}
		return res;
	};
};
// @leet end

int main() {}
