class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n =changed.size();
        vector<int>ans;
        if(n%2){
            return ans;
        }
        unordered_map<int,int> mp;
        for(auto x:changed){
            mp[x]++;
        }
        sort(changed.begin(),changed.end());
        for(auto x:changed){
            if(mp[x]==0){
                continue;
            }
            if(mp[x*2]==0){
                return {};
            }
            if(mp[x]>0 && mp[x*2] >0){
                ans.push_back(x);
                mp[x]--;
                mp[x*2]--;
            }
        }
        return ans;
        
    }   
};