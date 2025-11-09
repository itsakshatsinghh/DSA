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
int ans=0;
    int h(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int r=h(root->right);
        int l=h(root->left);
        ans=max(ans, r+l);
        return max(r,l)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
         h(root);
        return ans;
    }
};