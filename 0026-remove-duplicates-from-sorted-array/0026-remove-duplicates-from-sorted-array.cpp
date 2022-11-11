class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=0;
        for(int f=1;f<nums.size();f++){
            if(nums[f-1]!=nums[f]){
                nums[++s]=nums[f];
            }
        }
        return s+1;
    }
};