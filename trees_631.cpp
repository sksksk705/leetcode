#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
    typedef vector<int>::iterator it;
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0)
            return nullptr;
        return makeBST(nums.begin(), nums.end());
    }
    TreeNode* makeBST(it s, it e) {
        if (s >= e) return nullptr;

        int middle = (e - s) / 2;
        TreeNode* root = new TreeNode (*(s + middle));

        root->left = makeBST(s, s + middle);
        root->right = makeBST(s + middle+1, e);
        return root;
    }
};