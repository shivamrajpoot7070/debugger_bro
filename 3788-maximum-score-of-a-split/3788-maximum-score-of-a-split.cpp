class Solution {
public:
    long long maximumScore(vector<int>& arr) {
    
        int n=arr.size();

        vector<long long>left(n);

        vector<long long>right(n);

        left[0]=(long long)arr[0];
        right[n-1]=arr[n-1];

        long long ans=LLONG_MIN;

        for(int i=1;i<n;i++){
            left[i]=(long long)arr[i]+left[i-1];
        }

        for(int i=n-2;i>=0;i--){
             right[i]=min((long long)arr[i],right[i+1]);
        }

        for(int i=0;i<n-1;i++){
            long long diff=left[i]-right[i+1];
            ans=max(ans,diff);
        }

        // for(int x:left){
        //     cout<<x<<" ";
        // }

        // cout<<"\n";

        // for(int x:right){
        //     cout<<x<<" ";
        // }

        return ans;
    }
};