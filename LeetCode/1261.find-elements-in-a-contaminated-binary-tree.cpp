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

class FindElements {
  public:
	set<int> findValue;
	void explorePaths(TreeNode *root, int val) {
		if (root == nullptr) return;
		findValue.insert(val);
		explorePaths(root->left, 2 * val + 1);
		explorePaths(root->right, 2 * val + 2);
	}

	FindElements(TreeNode *root) { explorePaths(root, 0); }

	bool find(int target) { return findValue.find(target) != findValue.end(); }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
// @leet end
