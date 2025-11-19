class Solution {
public:
    vector<int> findAnagrams(string str, string pat) {
        
        vector<int>hash(26,0);

        for(char x:pat){
            hash[x-'a']++;

        }

        int n=pat.length();

        vector<int>ans;
        vector<int>main(26,0);
        int i=0,j=0;
        while(i<str.length() && j<str.length()){
            char x=str[j];
            main[x-'a']++;

            int win=(j-i)+1;

            if(win==n){
                if(main==hash){
                    ans.push_back(i);
                }
                cout<<j<<" ";
                main[str[i]-'a']--;
                i++;
            }
            j++;
        }

        return ans;
    }
};