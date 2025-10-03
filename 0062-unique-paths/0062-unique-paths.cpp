class Solution {
public:

    int total(int i,int j,int m,int n,vector<vector<int>>&dp){

        if(i==n-1 && j==m-1){
            return 1;
        }
        if(i>=n || j>=m){
            return 0;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int down=total(i+1,j,m,n,dp);
        int right=total(i,j+1,m,n,dp);

        return dp[i][j]=down+right;
    }
    int uniquePaths(int m, int n) {
          
          int i=0;
          int j=0;


          vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

          return total(i,j,m,n,dp);
    }
};