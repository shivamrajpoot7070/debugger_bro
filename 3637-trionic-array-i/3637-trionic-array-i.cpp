class Solution {
public:
    bool isTrionic(vector<int>& arr) {
        
        int n=arr.size();

        if(n<=3) return false;

        bool p=false;
        bool q=false;
        bool last=false;

        int i=1;

        while(i<n){

            if(arr[i]>arr[i-1]){
                p=true;
            }
            else{
                break;
            }
            i++;
        }

        cout<<"p"<< p<<i<<" ";

        i--;

        while(i<n-1){

            if(arr[i]>arr[i+1]){
                q=true;
            }
            else{
                break;
            }
            i++;
        }
        cout<<"q"<<q<<i<<" ";

        if(i<n-1){
            if(p && q){
                while(i<n-1){
                    if(arr[i]<arr[i+1]){
                        last=true;    
                    }
                    else{
                        break;
                    }
                    i++;
                }

                if(last && i==n-1) return true;
                else return false;
                cout<<"lt"<<last<<i<<" ";
            }
            else{
                return false;
            }
        }

        return false;

    }
};