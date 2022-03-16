/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ret = 0;
        if (root) {
            ret = 1;
            if (root->left)
                ret = max(ret, maxDepth(root->left) + 1);
            if (root->right)
                ret = max(ret, maxDepth(root->right) + 1);
        }
        return ret;
    }
};