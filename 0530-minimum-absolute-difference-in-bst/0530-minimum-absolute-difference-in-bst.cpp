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
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev = nullptr;
        int res = INT_MAX;
        inorder(root, prev, res);
        return res;
    }
private:
    void inorder(TreeNode* curr, TreeNode*& prev, int& res) {
        if (!curr) {
            return;
        }
        inorder(curr->left, prev, res);
        if (prev != nullptr) {
            res = min(curr->val - prev->val, res);
        }
        prev = curr;
        inorder(curr->right, prev, res);
    }
};