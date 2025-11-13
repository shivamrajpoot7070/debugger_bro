class Solution {
public:
    vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
    void mark(int i,int j,vector<vector<char>>&arr,vector<vector<int>>&vis){

        queue<pair<int,int>>q;
        q.push({i,j});

        while(q.size()>0){

            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<dir.size();k++){

                int ni=dir[k].first+i;
                int nj=dir[k].second+j;

                if(ni>=0 && nj>=0 && ni<arr.size() && nj<arr[0].size() && vis[ni][nj]==-1 && arr[ni][nj]=='X'){
                    q.push({ni,nj});
                    vis[ni][nj]=1;
                }
            }
        }
    }
    int countBattleships(vector<vector<char>>& arr) {
        
        int n=arr.size();
        int m=arr[0].size();

        vector<vector<int>>vis(n,vector<int>(m,-1));
        int ct=0;
        for(int i=0;i<arr.size();i++){

            for(int j=0;j<arr[i].size();j++){

                if(arr[i][j]=='X' && vis[i][j]==-1){
                    vis[i][j]=1;
                    ct++;
                    mark(i,j,arr,vis);
                }
            }
        }

        return ct;
    }
};