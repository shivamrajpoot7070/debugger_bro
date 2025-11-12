class Solution {
public:
    vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
    void find(int i,int j,queue<pair<int,int>>&q,vector<vector<int>>&vis,vector<vector<char>>&arr){

        q.push({i,j});
        
        while(q.size()>0){
            int i=q.front().first;
            int j=q.front().second;
                vis[i][j]=1;
            q.pop();

            for(int k=0;k<dir.size();k++){

                int ni=dir[k].first+i;
                int nj=dir[k].second+j;

                if(ni>=0 && ni<arr.size() && nj>=0 && nj<arr[0].size() && vis[ni][nj]==-1){

                    if(arr[ni][nj]=='1'){
                        q.push({ni,nj});
                        vis[ni][nj]=1;
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& arr) {
        
        queue<pair<int,int>>q;
        int n=arr.size();
        int m=arr[0].size();

        vector<vector<int>>vis(n,vector<int>(m,-1));

        int ct=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(arr[i][j]=='1' && vis[i][j]==-1){
                    ct++;
                    find(i,j,q,vis,arr);
                }
            }
        }

        return ct;
        
    }
};