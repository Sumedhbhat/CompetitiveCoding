#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	bool canBeValid(string s, string locked) {
		int n = s.size();
		if (n % 2 == 1) return false;
		stack<int> openBrackets, unLockedBrackets;
		for (int i = 0; i < n; i++) {
			if (locked[i] == '0') {
				unLockedBrackets.push(i);
			} else if (s[i] == '(') {
				openBrackets.push(i);
			} else if (s[i] == ')') {
				if (!openBrackets.empty()) {
					openBrackets.pop();
				} else if (!unLockedBrackets.empty()) {
					unLockedBrackets.pop();
				} else {
					return false;
				}
			}
		}
		while (!openBrackets.empty() && !unLockedBrackets.empty()) {
			if (openBrackets.top() < unLockedBrackets.top()) {
				openBrackets.pop();
				unLockedBrackets.pop();
			} else {
				return false;
			}
		}
		return openBrackets.empty();
	}
};
// @leet end

int main() {}
