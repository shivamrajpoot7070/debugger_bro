class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& arr) {
        
        unordered_map<int,vector<int>>mpp;

        int n=arr.size();

        vector<int>vis(n,-1);

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                mpp[i].push_back(arr[i][j]);
            }
        }

        queue<int>q;
        q.push(0);
        vis[0]=1;

        while(q.size()>0){

            int curr=q.front();
            q.pop();

            for(int i=0;i<mpp[curr].size();i++){

                if(vis[mpp[curr][i]]==-1){
                    vis[mpp[curr][i]]=1;
                    q.push(mpp[curr][i]);
                }
            }
        }

        for(int i=0;i<arr.size();i++){

            if(vis[i]==-1) return false;
        }

        return true;
    }
};