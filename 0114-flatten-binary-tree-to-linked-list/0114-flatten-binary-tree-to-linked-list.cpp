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
    void flatten(TreeNode* root) {
        queue<TreeNode*> q;
        preor(root ,q);
        if(!q.empty()){
            q.pop();
        }
        while(!q.empty()){
            root->right = q.front();
            root->left = NULL;
            q.pop();
            root = root->right;
        }
    }
    void preor(TreeNode* node , queue<TreeNode*>& q){
        if(node==NULL){
            return ;
        }
        q.push(node);
        preor(node->left , q);
        preor(node->right , q);
    }
};