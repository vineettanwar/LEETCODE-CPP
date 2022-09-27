class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long nn=n;
        
        // CONVERT TO POSITIVE
        if(nn<0) nn=-1*nn;
        
        while(nn){
            // IF ODD
            if(nn%2){
                ans=ans*x;
                nn=nn-1;
            }
            // IF EVEN 
            else{
                x=x*x;
                nn=nn/2;
            }
        }
        
        if(n<0) ans=(double)(1.0)/double(ans);
         return ans;
    }
   
};