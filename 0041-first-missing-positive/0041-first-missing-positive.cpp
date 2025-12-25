class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {

        unordered_set<int>st;

        int maxi=*max_element(arr.begin(),arr.end());

        for(int x:arr){
            if(x>0) st.insert(x);
        }

        if(st.size()==0) return 1;

        for(int i=1;i<=maxi;i++){
            if(st.find(i)==st.end()) return i;
        }

        return maxi+1;
    }
};