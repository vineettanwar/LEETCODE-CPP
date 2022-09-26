class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int lo=i+1;
            int hi=n-1;
            while(lo<hi){
                int temp=nums[i]+nums[lo]+nums[hi];
                if(abs(temp-target)<abs(sum-target)){
                    sum=temp;
                }
                if(temp>target){
                    hi--;
                }
                else if(temp<target){
                    lo++;
                }
                else{
                    return target;
                }
            }
        }
        return sum;
        
    }
};