/*

Given a binary tree, determine if it is height-balanced.

*/

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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int dl = depth(root->left);
        int dr = depth(root->right);
        return abs(dl-dr) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
    int depth(TreeNode* root) {
        if(!root) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }
};