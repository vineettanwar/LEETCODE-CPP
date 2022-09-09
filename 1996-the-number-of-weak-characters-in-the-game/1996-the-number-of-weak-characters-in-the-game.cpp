class Solution {
    public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0]){
            return a[0]>b[0];
        }
        return a[1]<b[1];
    }
public:
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(),prop.end(),comp);
        int maxtillnow=INT_MIN;
        int ans=0;
        for(auto p:prop){
            if(maxtillnow>p[1]){
                ans++;
            }
            else
                maxtillnow=p[1];
        }
        return ans;
        
    }
};