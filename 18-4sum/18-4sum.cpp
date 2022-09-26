class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        if(nums.empty()){
            return res;
        }
        sort(nums.begin(),nums.end());
        if(target<0 && nums[0]>0){
            return res;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long target2=target-nums[i]*1L-nums[j];
                int low=j+1;
                int high=n-1;
                while(low<high){
                    int two_sum=nums[low]+nums[high];
                    if(two_sum<target2){
                        low++;
                    }
                    else if(two_sum>target2){
                        high--;
                    }
                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[low];
                        quad[3]=nums[high];
                        res.push_back(quad);
                        while(low<high && nums[low]==quad[2]) ++low;
                        while(low<high && nums[high]==quad[3]) --high;
                    }
                }
                while(j+1<n && nums[j]==nums[j+1])++j;
                
            }
            while(i+1<n && nums[i]==nums[i+1])++i;
        }
        
       return res; 
    }
};