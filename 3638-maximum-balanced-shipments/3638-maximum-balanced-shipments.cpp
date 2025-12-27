class Solution {
public:
    int maxBalancedShipments(vector<int>& arr) {

        int maxi=-1;

        int ct=0;

        for(int i=0;i<arr.size();i++){

            if(maxi==-1){
                maxi=arr[i];
            }
            else
               {
                if(arr[i]<maxi){
                ct++;
                maxi=-1;
                }
                else{
                    maxi=max(maxi,arr[i]);
                }
            }
        }

        return ct;

    }
};