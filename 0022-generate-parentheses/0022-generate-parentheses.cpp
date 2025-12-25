class Solution {
public:
    void find(int open,int close,string temp,vector<string>&ans,int n){

        if(open+close==2*n){
            ans.push_back(temp);
        }

        if(open<n){
            temp.push_back('(');
            find(open+1,close,temp,ans,n);
            temp.pop_back();
        }
        if(close<open){
            temp.push_back(')');
            find(open,close+1,temp,ans,n);
        }
    }
    vector<string> generateParenthesis(int n) {

        vector<string>ans;
        int open=0;
        int close=0;
        string temp="";


        find(open,close,temp,ans,n);

        return ans;
    }
};