#include <__std_clang_module>
#include <queue>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right)
	    : val(x), left(left), right(right) {}
};

// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
  public:
	TreeNode *reverseOddLevels(TreeNode *root) {
		queue<pair<int, TreeNode *>> nodes;
		int currentNodeLevel = -1;
		nodes.push({0, root});
		while (!nodes.empty()) {
			if (currentNodeLevel != nodes.front().first and
			    nodes.front().first % 2 == 1) {
				currentNodeLevel = nodes.front().first;
				auto temp = nodes;
				vector<TreeNode *> values;
				while (!temp.empty()) {
					values.push_back(temp.front().second);
					temp.pop();
				}
				for (int i = 0; i < values.size() / 2; i++) {
					swap(values[i]->val, values[values.size() - 1 - i]->val);
				}
			}
			if (nodes.front().second->left != nullptr and
			    nodes.front().second->right != nullptr) {
				nodes.push(
				    {nodes.front().first + 1, nodes.front().second->left});
				nodes.push(
				    {nodes.front().first + 1, nodes.front().second->right});
			}
		}
		return root;
	}
};
// @leet end

int main() {}
