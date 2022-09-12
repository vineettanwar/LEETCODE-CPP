class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
       
        vector<vector<int>> res;
        // 0 to 2^n-1
        for(int num=0;num<=(1<<n)-1;num++){
            vector<int> ans;
            // 0 to nums length -1
            for(int i=0;i<n;i++){
                //if ith bit set take that number 
                if(num & (1<<i)){
                    ans.push_back(nums[i]);
                }
            }
            // ans after iterating all bits 
            res.push_back(ans);
        }
        return res;
    }
};