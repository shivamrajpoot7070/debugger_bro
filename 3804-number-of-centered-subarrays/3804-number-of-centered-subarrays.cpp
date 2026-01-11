class Solution {
public:
    int centeredSubarrays(vector<int>& arr) {


        // for(int x:arr){
        //     mpp[x]++;
        // }

        int ct=0;
        
        for(int i=0;i<arr.size();i++){
            unordered_map<int,int>mpp;
            int sum=0;
            for(int j=i;j<arr.size();j++){
                mpp[arr[j]]++;
                sum+=arr[j];
                if(mpp[sum]>0) ct++;
            }
        }

        return ct;
    }
};