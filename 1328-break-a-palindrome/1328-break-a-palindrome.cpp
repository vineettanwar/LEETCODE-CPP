class Solution {
public:
    string breakPalindrome(string p) {
        if(p.length()==1){
            return "";
        }
        int i;
        for(i=0;i<p.length()/2;i++){
            if(p[i]>'a'){
                p[i]='a';
                return p;
            }
        }
        if(i==p.length()/2){
            p[p.length()-1]='b';
        }
        return p;
        
    }
};