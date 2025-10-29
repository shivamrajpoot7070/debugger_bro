class Solution {
public:
    int findLongestChain(vector<vector<int>>& arr) {
        
        sort(arr.begin(),arr.end());
        int ct=0;
        int ed=INT_MIN;
        for(int i=0;i<arr.size();i++){

            int cst=arr[i][0];
            int ced=arr[i][1];

            if(cst>ed){
                ct++;
                ed=ced;
            }
            else{
                ed=min(ed,ced);
            }
        }

        return ct;
    }
};