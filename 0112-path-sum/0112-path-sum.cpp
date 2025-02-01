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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) {
            return 0;
        }
        int sum = targetSum - root->val;
        if (sum == 0 && !root->left && !root->right) {
            return 1;
        }

        bool left = 0;
        bool right = 0;
        if (root->left) {
            left = hasPathSum(root->left, sum);
        }
        if (root->right) {
            right = hasPathSum(root->right, sum);
        }
        return left ||  right;
    }
};