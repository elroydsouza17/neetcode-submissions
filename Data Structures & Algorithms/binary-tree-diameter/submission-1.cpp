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
    int max_daimeter = 0;
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    };
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int left_height = maxDepth(root->left);
        int right_height = maxDepth(root->right);

        int daimeter = left_height + right_height;
        
        if (daimeter > max_daimeter) {
            max_daimeter = daimeter;
        }

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return max_daimeter;
    }
};
