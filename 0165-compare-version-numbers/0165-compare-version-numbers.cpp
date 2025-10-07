class Solution {
public:
    int compareVersion(string str1, string str2) {
        
        vector<string> arr1, arr2;
        string t = "";

        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] == '.') {
                arr1.push_back(t);
                t = "";
            } else {
                t += str1[i];
            }
        }
        arr1.push_back(t); 
        

      
        t = "";
        for (int i = 0; i < str2.length(); i++) {
            if (str2[i] == '.') {
                arr2.push_back(t);
                t = "";
            } else {
                t += str2[i];
            }
        }
        arr2.push_back(t); 
        

        int i = 0, j = 0;

        
        
        while (i < arr1.size() || j < arr2.size()) {

            string temp1, temp2;

            if (i < arr1.size()) {
                temp1 = arr1[i];  
            } 
            else {
                temp1 = "0"; 
            }

            if (j < arr2.size()) {
                temp2 = arr2[j];  
            } else {
                temp2 = "0"; 
            }

            
            int k = 0;
            while (k < temp1.size() && temp1[k] == '0') {
                k++;
            }

            int k1 = 0;
            while (k1 < temp2.size() && temp2[k1] == '0') {
                k1++;
            }

            string a = temp1.substr(k);
            string b = temp2.substr(k1);

            if (a == "") {
                a = "0";
            }
            if (b == "") {
                b = "0";
            }

          
            if (a.size() < b.size()) {
                return -1;
            }
            
             else if (a.size() > b.size()) {
                return 1;
            } else {
               
                if (a < b) {
                    return -1;
                } else if (a > b) {
                    return 1;
                }
            }

            i++;
            j++;
        }

        return 0;
    }
};