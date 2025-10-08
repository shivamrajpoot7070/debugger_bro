class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& arr) {
        
        vector<int>indeg(v,0);
        map<int,vector<int>>mpp;

        for(int i=0;i<arr.size();i++){
            int node=arr[i][1];
            indeg[node]++;
            mpp[arr[i][0]].push_back(node);
        }

        vector<int>topo;
        queue<int>q;

        for(int i=0;i<v;i++){
            if(indeg[i]==0){
                q.push(i);
                topo.push_back(i);
            }
        }

        if(q.size()<=0) return false;

        while(q.size()>0){
            int node=q.front();
            q.pop();

            for(int i=0;i<mpp[node].size();i++){

               int conn=mpp[node][i];

               indeg[conn]--;

               if(indeg[conn]==0){
                q.push(conn);
                topo.push_back(conn);
            }
            }
        } 


        if(topo.size()!=v) return false;

        return true;
    }
};