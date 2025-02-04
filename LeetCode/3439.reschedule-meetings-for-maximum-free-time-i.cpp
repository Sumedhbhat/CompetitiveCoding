#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int maxFreeTime(int eventTime, int k, vector<int> &startTime,
	                vector<int> &endTime) {
		const int mSize = startTime.size();
		int latestEndTime = 0;
		vector<int> gaps;
		for (int i = 0; i < mSize; i++) {
			gaps.push_back(startTime[i] - latestEndTime);
			latestEndTime = endTime[i];
		}
		gaps.push_back(eventTime - latestEndTime);
		int maxTime = 0;
		int currentMax = 0;
		for (int i = 0; i <= mSize; i++) {
			currentMax += gaps[i];
			if (i >= k + 1) currentMax -= gaps[i - k - 1];
			maxTime = max(maxTime, currentMax);
		}
		return maxTime;
	}
};
// @leet end
