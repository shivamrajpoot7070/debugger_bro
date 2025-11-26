class Solution {
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& arr, int row, int col, int color) {
        
        queue<pair<int,int>>q;

        q.push({row,col});
        int main=arr[row][col];

        int n=arr.size();
        int m=arr[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m));
        vector<vector<int>>chng(n,vector<int>(m));

        vis[row][col]=-1;

        vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}};

        while(q.size()>0){

            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            int ct=0;

            for(auto&[x,y]:dir){

                int ni=x+i;
                int nj=y+j;

                if(ni>=0 && nj>=0 && ni<arr.size() && nj<arr[0].size() && arr[ni][nj]==main){
                    ct++;
                }
            }
            if(ct<4){
                chng[i][j]=-1;
            }

                for(auto&[x,y]:dir){

                int ni=x+i;
                int nj=y+j;

                if(ni>=0 && nj>=0 && ni<arr.size() && nj<arr[0].size() && arr[ni][nj]==main && vis[ni][nj]!=-1){
                    q.push({ni,nj});
                    vis[ni][nj]=-1;
                }
                }
        }

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){

                if(chng[i][j]==-1){
                    arr[i][j]=color;
                }
            }
        }
        return arr;
    }
};