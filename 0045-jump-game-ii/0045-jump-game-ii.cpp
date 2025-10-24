class Solution {
public:
    int jump(vector<int>& arr) {
        
        int curr=0;
        int maxi=0;

        int jump=0;

        for(int i=0;i<arr.size();i++){

            maxi=max(maxi,i+arr[i]);

            if(i==curr || i==0){
                if(i>=arr.size()-1){
                    return jump;
                }
                jump++;
                curr=maxi;
            }
        }

        return jump;
    }
};