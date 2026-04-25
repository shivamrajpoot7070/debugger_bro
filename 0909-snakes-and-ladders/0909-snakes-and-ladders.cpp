class Solution {
public:
    typedef pair<int,int>p;
    int snakesAndLadders(vector<vector<int>>& arr) {    

        unordered_map<int,int>mpp;
        int m=arr[0].size();
        int siz=m*m;
        int n=1;

        bool sidha=true;
        queue<p>q;

        for(int i=arr.size()-1;i>=0;i--){

            if(sidha){
                for(int j=0;j<arr[i].size();j++){
                    if(arr[i][j]!=-1){
                        mpp[n]=arr[i][j];
                    }
                    n++;
                }
                sidha=false;
            }
            else{
                for(int j=arr[i].size()-1;j>=0;j--){
                    if(arr[i][j]!=-1){
                        mpp[n]=arr[i][j];
                    }
                    n++;
                }
                sidha=true;
            }
        }

         for(auto it:mpp){
            cout<<it.first<<" "<<it.second<<"\n";
        }

        vector<int>vis(siz+1,-1);

        q.push({1,0});

        vis[siz]=1;

        while(q.size()>0){

            int curr=q.front().first;
            int dis=q.front().second;

            q.pop();

            for(int i=1;i<=6;i++){

                int next=curr+i;

                if(next>siz) continue;

                if(mpp.find(next)!=mpp.end()){
                    next=mpp[next];
                }

                if(next==siz) return dis+1;
                
                if(vis[next]==-1){
                    vis[next]=1;
                    q.push({next,dis+1});
                }
            }
        }

       

        return -1;

    }
};