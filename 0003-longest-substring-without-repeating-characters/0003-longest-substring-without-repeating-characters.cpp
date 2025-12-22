class Solution {
public:
    int lengthOfLongestSubstring(string arr) {

        unordered_map<char,int>mpp;

        int i=0;
        int j=0;
        int ans=0;

        while(i<arr.length() && j<arr.length()){
            mpp[arr[j]]++;

            while(i<=j && mpp[arr[j]]>1){
                mpp[arr[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }

        return ans;
    }
};