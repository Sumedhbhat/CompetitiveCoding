#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	int prefixCount(vector<string> &words, string pref) {
		int res = 0;
		for (auto x : words) {
			if (x.size() >= pref.size() && x.substr(0, pref.size()) == pref) {
				res++;
			}
		}
		return res;
	}
};
// @leet end

int main() {}
