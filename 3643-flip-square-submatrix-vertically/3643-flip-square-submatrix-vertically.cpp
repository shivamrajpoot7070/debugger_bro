class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& arr, int x, int y, int kk) {


        int col=y+kk;
        int row=x+kk;

        int i=x;
        int j=row-1;

        while(i<=j){

            for(int k=y;k<col;k++){
                swap(arr[i][k],arr[j][k]);
            }
            i++;
            j--;
        }

        return arr;
    }
};