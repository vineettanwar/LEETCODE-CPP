class Solution {
public:
    int maximum69Number (int num) {
        int n=num;
        int nm=0;
        int p=1;
        int sx=0;
        while(n){
            int x=n%10;
            if(x==6){
                sx=p;
            }
            nm=x*p+nm;
            n=n/10;
            p*=10;
        }
        nm=(nm-(6*sx))+9*sx;
        return nm;
    }
};