#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	vector<string> wordSubsets(vector<string> &words1, vector<string> &words2) {
		long checker = 0;
		vector<int> count(26, 0);
		vector<string> res;
		for (auto word : words2) {
			vector<int> tempCount(26, 0);
			for (auto c : word) {
				int charIndex = c - 'a';
				tempCount[charIndex]++;
				checker |= 1 << (charIndex);
			}

			for (int i = 0; i < 26; i++) {
				count[i] = max(count[i], tempCount[i]);
			}
		}

		for (auto word : words1) {
			long temp = 0;
			vector<int> wordCount(26, 0);
			for (auto c : word) {
				int charIndex = c - 'a';
				wordCount[charIndex]++;
				temp |= 1 << (charIndex);
			}
			if ((temp & checker) != checker) continue;
			bool isSubset = true;
			for (int j = 0; j < 26; j++) {
				if (wordCount[j] < count[j]) {
					isSubset = false;
					break;
				}
			}
			if (isSubset) res.push_back(word);
		}
		return res;
	}
};
// @leet end

int main() {}
