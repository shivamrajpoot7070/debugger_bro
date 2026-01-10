class Solution {
public:
    typedef pair<int,pair<int,int>>p;
    typedef pair<int,int>pp;

    int minTime(int n, vector<vector<int>>& arr) {

        vector<int>dist(n,INT_MAX);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        unordered_map<int,vector<p>>mpp;

        for(int i=0;i<arr.size();i++){
            int u=arr[i][0];
            int v=arr[i][1];
            int st=arr[i][2];
            int ed=arr[i][3];

            mpp[u].push_back({v,{st,ed}});

        }

        dist[0]=0;

        pq.push({0,0});

        while(pq.size()>0){

            int tym=pq.top().first;
            int u=pq.top().second;

            pq.pop();

            for(int i=0;i<mpp[u].size();i++){

                int v=mpp[u][i].first;
                int st=mpp[u][i].second.first;
                int ed=mpp[u][i].second.second;

                if(tym>ed) continue;

                int starttime =tym;

                if(starttime<st){
                    starttime+=(st-starttime);
                }

                starttime+=1;

                
                
                if(starttime<dist[v]){
                    cout<<"\n";
                    dist[v]=starttime;
                    pq.push({starttime,v});
                }
            }
        }

        if(dist[n-1]==INT_MAX) return -1;

        return dist[n-1];

    }
};