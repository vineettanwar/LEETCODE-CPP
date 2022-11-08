class Solution {
public:
    string makeGood(string s) {
        // if(s.length()<1){
        //     return s;
        // }
        // if(s.length()==2){
        //     if(int(s[0]-s[1])==32){
        //         return "";
        //     }
        //     else{
        //         return s;
        //     }
        // }
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && (abs(int(st.top())-int(s[i])))==32){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        if(st.empty()){
            return ans;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        }
};