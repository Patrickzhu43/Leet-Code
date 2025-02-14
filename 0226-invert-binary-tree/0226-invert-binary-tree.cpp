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
    TreeNode* invertTree(TreeNode* root) {
        if (!root) {
            return root;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            swap(cur->right, cur->left);
            if (cur->right) {
                q.push(cur->right);
            }
            if (cur->left) {
                q.push(cur->left);
            }
        }
        return root;
    }
};