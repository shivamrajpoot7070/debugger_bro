class Solution {
public:
    int findPeakElement(vector<int>& arr) {

        if(arr.size()==1){
            return 0;
        }
        

        for(int i=0;i<arr.size();i++){

            if(i==0){
                if(arr[i]>arr[i+1]){
                    return i;
                }
            }

            else if(i==arr.size()-1){

                if(arr[i]>arr[i-1]){
                    return i;
                }
            }

            else{

                if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    return i;
                }
            }
        }

        return -1;
    }
};