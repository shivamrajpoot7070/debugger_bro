class Solution {
public:
    int longestValidParentheses(string str) {
        
        int left=0;
        int right=0;

        int maxi=0;

        for(int i=0;i<str.length();i++){

            if(str[i]=='('){
                left++;
            }

            if(str[i]==')'){
                right++;
            }

            if(right==left){
                maxi=max(maxi,2*left);
            }

            if(right>left){
                left=0;
                right=0;
            }
        }

        left=0;
        right=0;

        int i=str.length()-1;

        while(i>=0){

            if(str[i]=='('){
                left++;
            }

            if(str[i]==')'){
                right++;
            }

            if(right==left){
                maxi=max(maxi,2*left);
            }

            if(left>right){
                left=0;
                right=0;
            }

            i--;
        }
        return maxi;
    }
};