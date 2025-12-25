class Solution {
public:
    int threeSumClosest(vector<int>& arr, int tar) {

        int ans;
        int diff=INT_MAX;

        int n=arr.size();
        int i=0;
        int j=0;
        int k=n-1;

        while(i<n-2){
            j=i+1;
            while(j<n-1){
                k=n-1;
                while(k>j){
                    int sum=arr[i]+arr[j]+arr[k];

                    if(abs(sum-tar)<diff){
                        diff=abs(sum-tar);
                        ans=sum;
                    }
                    k--;
                }
                j++;
            }
            i++;
        }

        return ans;
    }
};