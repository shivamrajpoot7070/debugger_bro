class Solution {
public:
    int numMatchingSubseq(string str, vector<string>& arr) {
        
        unordered_map<char,vector<int>>mpp;

        for(int i=0;i<str.length();i++){

            mpp[str[i]].push_back(i);
        }

        int ans=0;

        for(int i=0;i<arr.size();i++){

            string temp=arr[i];
            int prev=-1;
            int ct=0;
            bool find=true;

            for(int j=0;j<temp.length();j++){

                if(mpp.find(temp[j])!=mpp.end()){

                    auto &v=mpp[temp[j]];

                    auto it=upper_bound(v.begin(),v.end(),prev);

                    if(it==v.end()){
                        find=false;
                        break;
                    }
                    else{
                        prev=*it;
                    }
                }
                else{
                    find=false;
                }  
            }
            if(find){
                ans++;
            }
        }

        return ans;
    }
};