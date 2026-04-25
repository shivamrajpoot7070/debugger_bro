class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& arr) {

        unordered_map<string,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]=1;
        }

        if(mpp.find(end)==mpp.end()) return 0;

        queue<pair<string,int>>q;

        q.push({begin,1});

        mpp.erase(begin);

        while(q.size()>0){

            string temp=q.front().first;
            int dist=q.front().second;
            q.pop();

            string org=temp;

            for(int i=0;i<temp.length();i++){

                for(char c='a';c<='z';c++){

                    temp[i]=c;

                    if(temp==end) return dist+1;

                    if(mpp.find(temp)!=mpp.end()){
                        cout<<temp<<" ";
                        q.push({temp,dist+1});
                        mpp.erase(temp);
                    }
                }
                temp=org;
            }
        }

        return 0;

        
    }
};