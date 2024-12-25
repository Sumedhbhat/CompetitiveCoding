#include <__std_clang_module>
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
	vector<int> largestValues(TreeNode *root) {
		queue<TreeNode *> queue;
		vector<int> res;
		if (root == nullptr) return res;
		queue.push(root);
		while (!queue.empty()) {
			int size = queue.size();
			int max = INT_MIN;
			for (int i = 0; i < size; i++) {
				TreeNode *node = queue.front();
				queue.pop();
				if (node->val > max) max = node->val;
				if (node->left) queue.push(node->left);
				if (node->right) queue.push(node->right);
			}
			res.push_back(max);
		}
		return res;
	};
	// @leet end

	int main() {}
