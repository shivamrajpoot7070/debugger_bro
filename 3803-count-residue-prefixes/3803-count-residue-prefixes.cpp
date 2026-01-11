class Solution {
public:
    int residuePrefixes(string str) {
        
        unordered_map<char,int>mpp;

        int ct=0;
        for(int i=0;i<str.length();i++){

            char c=str[i];

            int len=(i+1)%3;
            
            mpp[c]++;

            if(mpp.size()==len) ct++;
        }

        return ct;

    }
};