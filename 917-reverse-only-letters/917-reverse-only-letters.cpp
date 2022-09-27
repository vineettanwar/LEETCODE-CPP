class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st=0;
        int e=s.length()-1;
        while(st<e){
            if(!isalpha(s[st])){
                st++;
            } 
            else if(!isalpha(s[e])){
                e--;
            }
            else{
                swap(s[st],s[e]);
                st++;
                e--;
            }
        }
        return s;
    }
};