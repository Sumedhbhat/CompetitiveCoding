#include <__std_clang_module>
using namespace std;

// @leet start
class Solution {
  public:
	string removeOccurrences(string s, string part) {
		while (s.find(part) != string::npos) {
			s.erase(s.find(part), part.size());
		}
		return s;
	}
};
// @leet end
