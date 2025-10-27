class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());

        int ed=INT_MIN;
        int ct=0;

        for(int i=0;i<arr.size();i++){

            int cst=arr[i][0];
            int ced=arr[i][1];

            if(cst<ed){
                ed=min(ed,ced);
                ct++;
            }
            else{
                ed=ced;
            }
        }

        return ct;
    }
};