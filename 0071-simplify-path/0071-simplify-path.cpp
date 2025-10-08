class Solution {
public:
    string simplifyPath(string str) {
        stack<string>st;
        string temp="";
        for(int i=1;i<str.length();i++){


            if(str[i]=='/'){

                if(temp==".."){
                    if(st.size()>0) st.pop();
                }
                else if(temp=="."){
                    continue;
                }
                else{
                    if(temp.size()>0){
                        st.push(temp);
                    }
                }
                temp="";
            }
            else{
                temp+=str[i];
            }
        }

        if(temp==".."){
            if(st.size()>0){
                st.pop();
            }
        }

        else if(temp=="."){
            cout<<"hi";
        }

        else{
            if(temp.size()>0){
                st.push(temp);
            }
        }
        string ans="/";
        stack<string>org;

        while(st.size()>0){
            org.push(st.top());
           // ans+='/';
            st.pop();
        }

        while(org.size()>0){
            ans+=org.top();
            ans+='/';
            org.pop();
        }

        if(ans!="/"){
        ans.pop_back();
           
        }
       // reverse(ans.begin(),ans.end());
        return ans;
    }
};