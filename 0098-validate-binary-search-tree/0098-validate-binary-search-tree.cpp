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
    bool isValidBST(TreeNode* root) {
        long prev = LONG_MIN;
        return helper(root, prev);
    }
    bool helper(TreeNode* root, long& prev) {
        if (!root) {
            return true;
        }
        if (!helper(root->left, prev)) {
            return false;
        }
        if (prev >= root->val) {
            return false;
        }
        prev = root->val;
        return helper(root->right, prev);
    }
};