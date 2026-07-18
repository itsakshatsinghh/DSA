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
        return isbst( root , LLONG_MIN , LLONG_MAX);
        
    }
    bool isbst(TreeNode* node , long long min , long long mx){
        if(node==nullptr){
            return true;
        }
        if(node->val<=min || node->val >= mx){
            return false;
        }
        return isbst(node->left , min , node->val) && isbst(node->right , node->val , mx);
    }
};