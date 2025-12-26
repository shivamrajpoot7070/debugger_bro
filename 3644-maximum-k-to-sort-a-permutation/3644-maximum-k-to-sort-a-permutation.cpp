class Solution {
public:
    int sortPermutation(vector<int>& arr) {

        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]=i;
        }

        int n=arr.size();

        int curr=0;

        int maxi=-1;

        for(int i=0;i<arr.size();i++){

            if(arr[i]==i){
                continue;
            }

            else{

                if(maxi==-1) maxi=arr[i];
                else{
                    maxi &=arr[i];
                }
            }
        }

        if(maxi==-1) return 0;

        return maxi;
    }
};