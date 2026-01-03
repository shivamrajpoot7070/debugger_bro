class Solution {
public:
    int xorAfterQueries(vector<int>& arr, vector<vector<int>>& que) {
        const int MOD=1e9+7;

        for(int i=0;i<que.size();i++){

            int st=que[i][0];
            int ed=que[i][1];
            int k=que[i][2];
            int mul=que[i][3];

           for (int j = st; j <= ed; j += k) {
                arr[j] = (1LL * arr[j] * mul) % MOD;  // ✅ FIX
            }
        }

        int ans=-1;

        for(int x:arr){
            
            if(ans==-1){
                ans=x;
            }
            else{
                ans^=x;
            }
        }

        return ans;
    }
};