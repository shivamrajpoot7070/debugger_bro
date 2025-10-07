class Solution {
public:
    string countAndSay(int n) {
    
        if(n==1){
            return "1";
        }
        string out=countAndSay(n-1);
        int ct=1;
        string ans="";

        for(int i=0;i<out.length();i++){

            if(i==out.length()-1){
                if(i>0 && out[i]==out[i-1]){
                    ans+=to_string(ct);
                    ans+=out[i];
                }
                else{
                    ans+='1';
                    ans+=out[i];
                }
            }
            else{
                if(out[i]==out[i+1]){
                    ct++;
                }
                else{
                    ans+=to_string(ct);
                    ans+=out[i];
                    ct=1;
                }
            }
        }

        return ans;
    }
};