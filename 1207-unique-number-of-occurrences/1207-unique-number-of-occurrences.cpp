class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_map<int,int> dis;
        for(auto x: arr){
            freq[x]++;
        }
        for(auto x:freq){
            dis[x.second]++;
            if(dis[x.second]>1){
                return false;
            }
        }
        return true;
        
    }
};