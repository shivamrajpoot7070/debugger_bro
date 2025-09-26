class Solution {
public:
    int triangleNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int ct = 0;

        int i = 0;
        while (i < n - 2) {
            int j = i + 1;
            while (j < n - 1) {
                int k = j + 1;
                while (k < n) {
                   
                    if (arr[i] + arr[j] > arr[k]) {
                        ct++;
                    }
                    k++;
                }
                j++;
            }
            i++;
        }

        return ct;
    }
};
