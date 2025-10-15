class Solution {
public:
    void sortColors(vector<int>& arr) {

        int z=0;
        int on=0;
        int tw=0;


        int i=0;
        while(i<arr.size()){

            if(arr[i]==0){
                swap(arr[z],arr[i]);
                z++;
            }
            i++;
        }
        on=z;
        i=z;
        while(i<arr.size()){

            if(arr[i]==1){
                swap(arr[on],arr[i]);
                on++;
            }
            i++;
        }

        return;
        
    }
};