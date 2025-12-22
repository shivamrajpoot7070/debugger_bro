class Solution {
public:
    bool ispalin(int i,int j,string arr){

        while(i<=j){
            if(arr[i]!=arr[j]) return false;
            i++;
            j--;
        }

        return true;
    }
    string longestPalindrome(string arr) {
        int len=-1;
        int n=arr.size();
        string ans="";

        for(int i=0;i<arr.size();i++){
            for(int j=i;j<n;j++){
                if(arr[i]==arr[j]){
                    if(ispalin(i,j,arr)){
                        if((j-i)+1>len){
                            len=(j-i)+1;
                            ans=arr.substr(i,j-i+1);
                            cout<<ans<<" ";
                        }
                    }
                }
            }
        }

        return ans;

    }
};