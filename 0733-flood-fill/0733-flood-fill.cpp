class Solution {
public:
    vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}};

    vector<vector<int>> floodFill(vector<vector<int>>& arr, int sr, int sc, int color) {
        
        queue<pair<int,int>>q;
        int main=arr[sr][sc];

        q.push({sr,sc});

        int n=arr.size();
        int m=arr[0].size();

        vector<vector<int>>vis(n,vector<int>(m,-1));
        vis[sr][sc]=1;

        while(q.size()>0){

            int i=q.front().first;
            int j=q.front().second;

            q.pop();

            for(auto[x,y]:dir){

                int ni=i+x;
                int nj=j+y;

                if(ni>=0 && nj>=0 && ni<n && nj<m && vis[ni][nj]==-1 && arr[ni][nj]==main){
                    q.push({ni,nj});
                    vis[ni][nj]=1;
                }
            }
        }

        vector<vector<int>>ans(n,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=-1){
                    ans[i][j]=color;
                }
                else{
                    ans[i][j]=arr[i][j];
                }
            }
        }

        return ans;
    }
};