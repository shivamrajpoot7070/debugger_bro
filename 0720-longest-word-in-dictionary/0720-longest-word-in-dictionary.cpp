class Solution {
public:
    string longestWord(vector<string>& arr) {
        
        sort(arr.begin(),arr.end());

        // for(string x:arr){
        //     cout<<x<<" ";
        // }

        unordered_map<string,int>mpp;

        for(auto x:arr){
            mpp[x]++;
        }

        string ans="";
        string prev="";

        for(string x:arr){
            string str=x;
            string temp="";
            bool cant=true;
            for(int i=0;i<str.length()-1;i++){
                temp+=str[i];
                if(mpp[temp]==0){
                    cant=false;
                }
            }

            if(cant){

                if(str.length()>ans.length()){
                    ans=str;
                }

                else if(str.length()==ans.length()){

                    if(str<ans){
                        ans=str;
                    }
                }

                cout<<ans<<" ";
            }
        }

        return ans;
    }
};