class Solution {
    // private:
    // int getsum(vector<int>&nums){
    //     int sum=0;
    //     for(auto x:nums){
    //         if(x%2==0){
    //             sum+=x;
    //         }
    //     }
    //     return sum;
    // }
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int evensum=0;
        for(auto num:nums){
            if(num%2==0){
                evensum+=num;
            }
        }
        for(auto q:queries){
            int val=q[0];
            int idx=q[1];
            
            if(nums[idx]%2==0){
                evensum-=nums[idx];
            }
            
            nums[idx]=nums[idx]+val;
            if(nums[idx]%2==0){
                evensum+=nums[idx];
            }
            ans.push_back(evensum);
        }
        return ans;
        
    }
};