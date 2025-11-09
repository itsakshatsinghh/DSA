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
    int h(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int r=h(root->right);
        int l=h(root->left);
        return max(r,l)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int r=diameterOfBinaryTree(root->right);
        int l=diameterOfBinaryTree(root->left);
        int curr=h(root->left)+h(root->right);
        return max(curr, max(r, l));
    }
};