class Solution {
public:
    int search(vector<int>&arr, int tar) {
        
        int low=0;
        int high=arr.size()-1;

        while(low<=high){

            int mid=(low+high)/2;

            if(arr[mid]==tar) return mid;

            else if(arr[low]<=arr[mid]){

                if(tar<=arr[mid] && tar>=arr[low]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }

            else{

                if(tar>=arr[mid] && arr[high]>=tar){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }

        }

        return-1;
    
    }
};