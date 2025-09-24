class Solution {
public:     

    vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
    bool check(int i, int j,vector<vector<char>>&arr, string &word,string &temp,vector<vector<bool>>&vis){

        if(temp==word){
            return true;
        }

        if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size()) return false;

        for(auto [x,y]:dir){

            int ni=i+x;
            int nj=j+y;

            if(ni>=0 && nj>=0 && ni<arr.size() && nj<arr[0].size() && vis[ni][nj]==true){

                if(arr[ni][nj]==word[temp.length()]){
                    temp+=arr[ni][nj];
                    vis[ni][nj]=false;
                    if(check(ni,nj,arr,word,temp,vis)) return true;
                    temp.pop_back();
                    vis[ni][nj]=true;
                }
            }
        }

        return false;

    }
    bool exist(vector<vector<char>>& arr, string word) {

        int n=arr.size();
        int m=arr[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,true));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(arr[i][j]==word[0]){
                    string temp="";
                    temp+=word[0];
                    vis[i][j]=false;
                    if(check(i,j,arr,word,temp,vis)) return true;
                    vis[i][j]=true;
                }
            }
        }

        return false;

    }
};