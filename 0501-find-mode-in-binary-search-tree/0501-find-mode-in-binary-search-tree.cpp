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
     void find(TreeNode* root,unordered_map<int,int>&mpp){

        if(root==NULL) return;

        mpp[root->val]++;
        find(root->left,mpp);
        find(root->right,mpp);
     }

    vector<int> findMode(TreeNode* root) {
        
        unordered_map<int,int>mpp;

        find(root,mpp);

        int maxi=INT_MIN;

        for(auto [x,y]:mpp){

            maxi=max(maxi,y);
        }

        vector<int>ans;

        for(auto [x,y]:mpp){
            if(y==maxi){
                ans.push_back(x);
            }
        }

        return ans;
    }
};