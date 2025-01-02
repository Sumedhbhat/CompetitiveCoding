#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	vector<int> vowelStrings(vector<string> &words,
	                         vector<vector<int>> &queries) {
		const int n = words.size();
		vector<int> prefix(n + 1, 0), res;

		auto isVowel = [](char c) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				return true;
			return false;
		};

		for (int i = 1; i <= n; i++) {
			auto x = words[i - 1];
			prefix[i] = prefix[i - 1];
			if (isVowel(x[0]) && isVowel(x.back())) prefix[i]++;
		}

		for (auto x : queries) {
			auto start = x[0], end = x[1];
			res.push_back(prefix[end + 1] - prefix[start]);
		}

		return res;
	}
};
// @leet end

int main() {}
