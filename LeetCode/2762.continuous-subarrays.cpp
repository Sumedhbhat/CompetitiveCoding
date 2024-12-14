#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	long long continuousSubarrays(vector<int> &nums) {
		const int n = nums.size();
		long long currentTotal = 0;
		set<pair<int, int>> orderer;
		int left = 0, right = 0;
		while (right < n and left < n) {
			while (right < n and
			       (orderer.empty() or
			        orderer.rbegin()->first - orderer.begin()->first <= 2)) {
				orderer.insert({nums[right], right});
				right++;
				if (orderer.rbegin()->first - orderer.begin()->first <= 2)
					currentTotal += right - left;
			}
			while (left <= right and
			       (!orderer.empty() and
			        orderer.rbegin()->first - orderer.begin()->first > 2)) {
				orderer.erase({nums[left], left});
				left++;
				if (orderer.rbegin()->first - orderer.begin()->first <= 2)
					currentTotal += right - left;
			}
		}
		return currentTotal;
	}
};
// @leet end

int main() {}
