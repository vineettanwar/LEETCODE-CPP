class Solution {
public:
    string breakPalindrome(string p) {
        int n=p.length();
        if(n==1){
            return "";
        }
        int i;
        for(i=0;i<n/2;i++){
            if(p[i]>'a'){
                p[i]='a';
                return p;
            }
        }
        if(i==n/2){
            p[n-1]='b';
        }
        return p;
        
    }
};