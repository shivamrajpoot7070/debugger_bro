class Solution {
public:
    vector<vector<int>> generate(int num) {

        if(num<=1) return {{1}};
        
        vector<vector<int>>ans;
        ans.push_back({1});
        ans.push_back({1,1});
        int ct=2;
        vector<int>arr={1,1};
        //vector<int>temp;
        while(ct<num){

            vector<int>temp;
        
            for(int i=0;i<arr.size();i++){

                if(i==0 || i==arr.size()-1){
                    temp.push_back(arr[i]);

                    if(i==0){
                        temp.push_back(arr[i]+arr[i+1]);
                    }
                }

                else{
                    temp.push_back(arr[i]+arr[i+1]);
                } 
            }
            //cout<<temp<<" ";
            ans.push_back(temp);
            arr=temp;
            ct++;
        }

        return ans;
    }
};