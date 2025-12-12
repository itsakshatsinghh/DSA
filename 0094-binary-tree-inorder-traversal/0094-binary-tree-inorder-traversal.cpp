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
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> a;

        TreeNode* curr = root ;
        
        while(curr!=NULL){
            if(curr->left==NULL){
                a.push_back(curr->val);
                curr= curr->right;
            }
            else{
                //finding Inorder Predecesor 
                TreeNode* Ip= curr->left;
                while(Ip->right!=NULL & Ip->right!=curr){
                    Ip=Ip->right;
                }
                if(Ip->right==NULL){
                    Ip->right=curr;//creating purana connection 
                    curr=curr->left;
                }else{ // deleting wo created connection 
                Ip->right=NULL;
                a.push_back(curr->val);
                curr=curr->right;

                }
            }
        }

        return a;
        
    }
};