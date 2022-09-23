class Solution {
    private:
    int totalbits(int n){
        return 1+int(log2(n));
    }
public:
    int concatenatedBinary(int n) {
         long long int ans=0;
        long mod=1e9+7;
        for(int i=1;i<=n;i++){
            int no=totalbits(i);
            ans=(((ans<<no)+i)%mod);
        }
        return ans%mod;
    }
};