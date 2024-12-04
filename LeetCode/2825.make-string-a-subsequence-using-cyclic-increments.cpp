#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	bool canMakeSubsequence(string str1, string str2) {
		const int n1 = str1.size(), n2 = str2.size();
		int sourceIdx = 0, targetIdx = 0;

		while (sourceIdx < n1 && targetIdx < n2) {
			if (str1[sourceIdx] == str2[targetIdx] ||
			    str1[sourceIdx] + 1 == str2[targetIdx] ||
			    str1[sourceIdx] == 'z' && str2[targetIdx] == 'a') {
				targetIdx++;
			}
			sourceIdx++;
		}
		return targetIdx == n2;
	}
};
// @leet end

int main() {}
