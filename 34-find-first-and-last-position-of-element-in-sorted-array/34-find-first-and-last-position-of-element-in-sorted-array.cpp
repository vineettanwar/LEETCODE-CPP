class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0){
            return {-1,-1};
        }
        if(nums[0]>target){
            return{-1,-1};
        }
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        int last=-1;
        while(low <=high){
            int mid= high+low/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0;
        high=nums.size()-1;
        while(low <=high){
            int mid= high+low/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return {first,last};
        
    }
};