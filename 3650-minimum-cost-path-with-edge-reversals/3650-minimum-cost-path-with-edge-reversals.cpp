class Solution {
public:
    int minCost(int n, vector<vector<int>>& adj) {

        unordered_map<int,vector<pair<int,int>>>arr;

        for(int i=0;i<adj.size();i++){

            int u=adj[i][0];
            int v=adj[i][1];
            int wt=adj[i][2];
            arr[u].push_back({v,wt});
            arr[v].push_back({u,2*wt});
        }

        queue<pair<int,int>>q;

        q.push({0,0});

        vector<int>ans(n,INT_MAX);

        ans[0]=0;

        while(q.size()>0){

            int curr=q.front().second;
            int val=q.front().first;
            q.pop();

            for(auto it:arr[curr]){
                int next=it.first;
                int wt=it.second;

                if(val+wt<ans[next]){
                    ans[next]=val+wt;
                    q.push({val+wt,next});
                }
            }
        }

         if(ans[n-1]==INT_MAX) return -1;

         return ans[n-1];
    }
};