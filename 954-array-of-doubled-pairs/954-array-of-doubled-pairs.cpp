class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        // int n =arr.size();
        // // vector<int>ans;
        // if(n%2){
        //     return ans;
        // }
        unordered_map<int,int> mp;
        for(auto x:arr){
            mp[x]++;
        }
        sort(arr.begin(),arr.end());
        int count=0;
        for(auto x:arr){
            if(mp[x]==0){
                continue;
            }
            if(x>=0){
                if(mp[x*2]==0){
                    return false;
                }
                if(mp[x]>0 && mp[x*2] >0){
                    count++;
                    mp[x]--;
                    mp[x*2]--;
                }
            }
            else{
                if(x%2!=0 || mp[x/2]==0){
                    return false;
                }
                if(mp[x]>0 && mp[x/2] >0){
                    count++;
                    mp[x]--;
                    mp[x/2]--;
                }
                
            }
        }
        return count==arr.size()/2;        
    }   
};