class Solution {
public:
     void find(int i,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,int tar){

        if(tar==0){
            ans.push_back(temp);
            return;
        }

        if(i>=arr.size() || tar<0){
            return;
        }

        temp.push_back(arr[i]);
        find(i+1,arr,temp,ans,tar-arr[i]);
        temp.pop_back();
        while(i+1<arr.size() && arr[i]==arr[i+1]) i++;
        find(i+1,arr,temp,ans,tar);
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int tar) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>temp;

        find(0,arr,temp,ans,tar);

        return ans;
    }
};