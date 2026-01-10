class Solution {
public:
    vector<int> longestCommonPrefix(vector<string>& arr) {

        if(arr.size()==1){
            return {0};
        }

        priority_queue<pair<int,int>>pq;
        int siz=arr.size();

        for(int i=0;i<arr.size()-1;i++){

            string fst=arr[i];
            string scnd=arr[i+1];
            int n=fst.length();
            int m=scnd.length();

            if(fst==scnd){
                pq.push({n,i});
            }
            else{
                int ct=0;
                for(int j=0;j<min(n,m);j++){
                    if(fst[j]==scnd[j]){
                        ct++;
                    }
                    else{
                        break;
                    }
                }
                pq.push({ct,i});
            }
        }

        vector<int>ans;

        for(int i=0;i<arr.size();i++){
            
            if(i==siz-1 || i==0){
               int avl=0;
                if(pq.top().second==i || pq.top().second==i-1){
                    pair<int,int>p;
                    p.first=pq.top().first;
                    p.second=pq.top().second;
                    pq.pop();
                    if(pq.size()>0){
                      avl=pq.top().first;
                    }
                    pq.push(p);
                }
                else{
                    avl=pq.top().first;
                }
                ans.push_back(avl);
            }
            else{
                int avl=0;
                if(pq.top().second==i || pq.top().second==i-1){
                    pair<int,int>p;
                    p.first=pq.top().first;
                    p.second=pq.top().second;
                    pq.pop();
                    avl=pq.top().first;
                    pq.push(p);
                }
                else{
                    avl=pq.top().first;
                }

                int notavl=-1;

                string prev=arr[i-1];
                string next=arr[i+1];

                int x=prev.length();
                int y=next.length();
                int c=0;

                if(prev==next){
                    notavl=x;
                }
                else{
                    
                    for(int k=0;k<min(x,y);k++){

                        if(prev[k]==next[k]){
                            c++;
                        }
                        else{
                            break;
                        }
                    }
                    notavl=c;
                }
                //cout<<avl<<" "<<notavl<<" "<<i<<" "<<"\n";

                int fin=max(avl,notavl);
                ans.push_back(fin);
            }
        }

        return ans;
    }
};