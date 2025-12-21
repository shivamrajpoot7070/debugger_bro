class Solution {
public:
    long long minCost(string str, vector<int>& cost) {
        
        unordered_map<char,int>mpp;

        for(char s:str){
            mpp[s]++;
        }

        long long ans=LLONG_MAX;

        for(auto it:mpp){
            long long sum=0;
            char c=it.first;

            for(int i=0;i<str.size();i++){
                if(str[i]!=c){
                    sum+=cost[i];
                }
            }
            ans=min(ans,sum);
        }

        return ans;
    }
};