class Solution {
public:
    int totalFruit(vector<int>& arr) {
        
        unordered_map<int,int>mpp;


        int i=0;
        int j=0;
        int maxi=INT_MIN;

        while(i<arr.size() && j<arr.size()){

            mpp[arr[j]]++;

            while(mpp.size()>2){

                mpp[arr[i]]--;

                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }

        return maxi;
    }
};