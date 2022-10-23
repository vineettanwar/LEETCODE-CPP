// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         unordered_map<int,bool> mp;
//         vector<int> ans;
//         for(int i=1;i<=nums.size();i++){
//             if(mp.find(nums[i-1])!=mp.end()){
//                 ans.push_back(nums[i-1]);
//                 ans.push_back(i);
//             }
//             mp[nums[i-1]]=true;
            
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int N = nums.size(), sum = N * (N + 1) / 2;
        vector<int> ans(2);
        vector<bool> seen(N+1);
        for (int num : nums) {
            sum -= num;
            if (seen[num]) ans[0] = num;
            seen[num] = true;
        }
        ans[1] = sum + ans[0];
        return ans;
    }
};
