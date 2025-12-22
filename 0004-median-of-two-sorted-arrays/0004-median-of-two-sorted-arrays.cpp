class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        
        double ans;
        int first;
        int second;
        bool odd=false;

        int n=arr1.size();
        int m=arr2.size();

        if((n+m)%2!=0){
            odd=true;
            first=(n+m)/2;
        }
        else{
            first=((n+m)/2)-1;
            second=((n+m)/2);
        }

        int i=0;
        int j=0;
        int curr=-1;

        double val1=INT_MIN;
        double val2=INT_MIN;

        while(i<arr1.size() && j<arr2.size()){
            curr++;
            if(odd && curr==first){
                val1=min(arr1[i],arr2[j]);
                return val1;
            }
            else if(curr==first){
                val1=min(arr1[i],arr2[j]);
                cout<<val1<<" ";
            }
            else if(curr==second){
                val2=min(arr1[i],arr2[j]);
                cout<<val2<<" ";
            }

            if(arr1[i]<=arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }

        if(val1!=INT_MIN && val2!=INT_MIN){
             return (val1+val2)/2.0;
        }

        while(i<arr1.size()){
            curr++;
            if(curr==first && odd){
                val1=arr1[i];
                return val1;
            }
            if(curr==second){
                val2=arr1[i];
            }
            i++;
        }

        while(j<arr2.size()){
            curr++;
            if(curr==first && odd){
                val1=arr2[j];
                return val1;
            }
            if(curr==second){
                val2=arr2[j];
            }
            j++;
        }

        if(val1!=INT_MIN && val2!=INT_MIN){
             return (val1+val2)/2.0;
        }

        return 0.0;

    }
};