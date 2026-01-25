class Solution {
public:
    vector<int> rotateElements(vector<int>& arr, int k) {

        vector<int>temp;

        for(int x:arr){

            if(x>=0) temp.push_back(x);
            
        }

        int n=temp.size();
        int rem=k;
        if(n>0 && k>n){
            rem=k%n;
        }
        

        if(n>0 && rem>0){
          rotate(temp.begin(),temp.begin()+rem,temp.end());
          //reverse(temp.begin(),temp.end());
        }

        int i=0;

         for(int j=0;j<arr.size();j++){

            if(arr[j]>=0){
                arr[j]=temp[i];
                i++;
            }
        }
        return arr;
    }
};