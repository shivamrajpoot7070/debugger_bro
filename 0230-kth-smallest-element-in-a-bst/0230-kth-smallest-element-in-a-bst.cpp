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

    int val;

    void kth(TreeNode* root,int &k){

        if(root==NULL) return;

          kth(root->left,k);
          k--;

         if(k==0){
            val=root->val;
            return;
         }
         kth(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
       kth(root,k);
       return val;
    }
};