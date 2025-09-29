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
   bool find(TreeNode* righty,TreeNode* lefty){
       if(righty==NULL && lefty==NULL){
        return true;
       }

       if(righty==NULL && lefty!=NULL){
        return false;
       }

       if(righty!=NULL && lefty==NULL){
        return false;
       }

       if(righty->val!=lefty->val){
        return false;
       }

       bool l=find(righty->right,lefty->left);
       bool r=find(righty->left,lefty->right);

       return l&r;
   }
    bool isSymmetric(TreeNode* root) {
        
        return find(root->left,root->right);
    }
};