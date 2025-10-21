class Solution {
public:
    int maxSumMinProduct(vector<int>& arr) {
        
        int n=arr.size();

        vector<int>left(n);
        vector<int>right(n);

        stack<int>st;
        for(int i=0;i<arr.size();i++){

            while(st.size()>0 && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(st.size()==0) left[i]=-1;
            else left[i]=st.top();

            st.push(i);
        }

        stack<int>st1;
        

         for(int i=n-1;i>=0;i--){

            while(st1.size()>0 && arr[i]<=arr[st1.top()]){
                st1.pop();
            }
            if(st1.size()==0) right[i]=n;
            else right[i]=st1.top();
            st1.push(i);
        }

        for(int x:left){
            cout<<x<<" ";
        }

        cout<<"\n";

        for(int x:right){
            cout<<x<<" ";
        }

        vector<long long >lsum(n,0);
        

        lsum[0]=arr[0];

        for(int i=1;i<n;i++){
            lsum[i]=lsum[i-1]+arr[i];
        }

        long long maxi=0;


        for(int i=0;i<arr.size();i++){
            long long pro=0;
            bool lef=false;
            bool rig=false;
            if(left[i]==-1){
               pro=lsum[right[i]-1];
            }
            else{
                pro=lsum[right[i]-1]-lsum[left[i]];
            }
            
            pro*=arr[i];

            maxi=max(maxi,pro);
        }

        return maxi % 1000000007;
    }
};