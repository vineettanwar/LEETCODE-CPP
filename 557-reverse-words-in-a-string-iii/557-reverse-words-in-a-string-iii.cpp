class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string nstr;
        string ans;
        while(getline(str,nstr,' ')){
            string temp=nstr;
            reverse(temp.begin(),temp.end());
            temp=temp+' ';
            ans.append(temp);
            
        }
        ans.pop_back();
        cout<<ans<<endl;
        return ans;
        
    }
};