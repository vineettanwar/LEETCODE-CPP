class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        for(int num=0;num<=(1<<n)-1;num++){
            vector<int> ans;
            for(int j=0;j<n;j++){
                if(num & (1<<j)){
                    ans.push_back(nums[j]);
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};