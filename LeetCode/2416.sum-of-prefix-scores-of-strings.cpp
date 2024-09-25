#include <bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode id=2416 lang=cpp
 *
 * [2416] Sum of Prefix Scores of Strings
 */

// @lc code=start
class Tries {
  public:
	Tries *children[26] = {};
	int count;
	bool endOfWord;
	Tries() {
		this->count = 0;
		this->endOfWord = false;
	}
};

class Solution {
  public:
	vector<int> sumPrefixScores(vector<string> &words) {
		Tries *head = new Tries();
		unordered_map<string, int> m;
		for (auto word : words) {
			Tries *temp = head;
			for (auto l : word) {
				if (temp->children[l - 'a'] == nullptr)
					temp->children[l - 'a'] = new Tries();
				temp = temp->children[l - 'a'];
				temp->count = temp->count + 1;
			}
			temp->endOfWord = true;
		}

		function<void(Tries *, int &, unordered_map<string, int> &, string &)>
		    dfs = [&](Tries *head, int &count, unordered_map<string, int> &m,
		              string current) -> void {
			if (head == nullptr) return;
			count += head->count;
			if (head->endOfWord) m[current] = count;
			for (int i = 0; i < 26; i++) {
				current += ('a' + i);
				dfs(head->children[i], count, m, current);
				current.pop_back();
			}
			count -= head->count;
		};

		int count = 0;
		string s = "";
		dfs(head, count, m, s);

		vector<int> ans;

		for (auto x : words) ans.push_back(m[x]);
		return ans;
	}
};
// @lc code=end
