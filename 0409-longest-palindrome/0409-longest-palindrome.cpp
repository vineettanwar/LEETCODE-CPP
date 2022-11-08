class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            int t;
            for(auto x:mp){
             t=x.second;
            }
            return t; 
        }
        int ans=0;
        bool odd=false;
        for(auto x:mp){
            ans+=(x.second/2*2);
            int mm=x.second/2;
            if(x.second%2==1 && ans%2==0){
                odd=true;
            }
        }
        if(odd){
            ans+=1;
        }
        return ans;
    }
};