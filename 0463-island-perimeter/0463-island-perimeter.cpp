class Solution {
public:
    int islandPerimeter(vector<vector<int>>& arr) {
        
        queue<pair<int,int>>q;
        int n=arr.size();
        int m=arr[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(arr[i][j]==1){
                    q.push({i,j});
                }
            }
        }

        int ans=0;

        vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}};

        while(q.size()>0){

            int i=q.front().first;
            int j=q.front().second;
            q.pop();

            for(auto&[x,y]:dir){

                int ni=x+i;
                int nj=y+j;


                if(ni<0 || nj<0 || ni>=n || nj>=m || arr[ni][nj]==0){
                    ans++;
                }
            }
        }

        return ans;
    }
};