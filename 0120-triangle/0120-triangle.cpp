class Solution {
public:
    int find(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){

        if(i==arr.size()-1){
            return arr[i][j];
        }

        // if(i>=arr.size() || j>=arr[i].size()){
        //     return INT_MAX;
        // }

        if(dp[i][j]!=INT_MIN){
            return dp[i][j];
        }

        int down=arr[i][j]+find(i+1,j,arr,dp);
        int rd=arr[i][j]+find(i+1,j+1,arr,dp);

        return dp[i][j]=min(down,rd);
    }
    int minimumTotal(vector<vector<int>>& arr) {

        int i=0;
        int j=0;
        vector<vector<int>>dp(201,vector<int>(201,INT_MIN));
        return find(0,0,arr,dp);
    }
};