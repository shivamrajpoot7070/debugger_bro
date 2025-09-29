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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;

        if(root==NULL){
            return ans;
        }

        while(q.size()>0){

            int n=q.size();
            vector<int>arr;
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                arr.push_back(temp->val);

                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }
            }

            ans.push_back(arr);
        }

        return ans;
    }
};