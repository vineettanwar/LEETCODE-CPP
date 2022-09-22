class Solution {
    string reverse(string s){
        int st=0;
        int e=s.length()-1;
        while(st<=e){
            swap(s[st++],s[e--]);
        }
        return s;
    }
public:
    string reverseWords(string s) {
        string ans;
        string temp;
        for(int i=0;i<=s.length();i++){
            if(s[i]!=' ' && s[i]!='\0'){
                temp=temp+s[i];
            }
            else{
                cout<<"TEMP"<<temp;
                string nstr=reverse(temp);
                temp.clear();
                cout<<nstr<<endl;
                ans=s[i]!='\0'? ans+nstr+' ':ans+nstr;
            }
        }
        return ans;
    }
};