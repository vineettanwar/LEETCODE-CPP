class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        while(s[n]==' ' && n>=0){
            n--;
        }
        int count=0;
        while(n>=0 && s[n]!=' '){
            count+=1;
            n--;
        }
        return count;
        
    }
};