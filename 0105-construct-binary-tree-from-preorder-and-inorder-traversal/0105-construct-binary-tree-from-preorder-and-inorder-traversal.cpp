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
    //Seach function 
    int search (vector<int>& inorder , int left , int right , int val){
        for(int i=left ; i<=right;i++){
            if(inorder[i]==val){
                return i;
            }
            
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& preIndex , int left , int right) {
        //base case;
        if(left>right){
            return NULL;
        }
        //Consturcting the root node;
        TreeNode* root= new TreeNode(preorder[preIndex]);
        
        //Writing a Seach function to find the root's left and right ;
        int inIDX= search(inorder , left , right , preorder[preIndex]);
        preIndex++;
        //actually building that right and left;
        root->left=helper(preorder , inorder , preIndex , left , inIDX-1);
        root->right=helper(preorder , inorder , preIndex , inIDX+1 ,right );

        return root;
        
    }
    

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex=0;
        return helper(preorder , inorder , preIndex , 0 , inorder.size()-1);

        
    }
};