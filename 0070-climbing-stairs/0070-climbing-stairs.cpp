class Solution {
public:
    vector<int>dp;
    int total(int n){

      if(n<=1) return 1;

      if(dp[n]!=-1){
        return dp[n];
      }

    return dp[n]=total(n-1)+total(n-2);

    }
    int climbStairs(int n) {
        
        
        dp.resize(n+1,-1);
       return total(n);
        
    }
};