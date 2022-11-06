class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        map<int,int> mp;
        long long sum=0;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }
        if(mp.size()==k){
            ans=max(sum,ans);
        }
        for(int i=k;i<nums.size();i++){
            
            mp[nums[i-k]]--;
            sum-=nums[i-k];
            if(mp[nums[i-k]]==0){
                mp.erase(nums[i-k]);
            }
            sum+=nums[i];
            mp[nums[i]]++;
            if(mp.size()==k){
                ans=max(ans,sum);            }
        }
//         long long ans=0;
//         deque<int>temp;
//         long long sum=0;
//         for(int i=0;i<k;i++){
//             sum+=nums[i];
//             temp.push_back(nums[i]);
            
//         }
//         if(nums[0]!=nums[1] && nums[1]!=nums[2]){
//             ans=max(ans,sum);
//         }
//         for(int i=k;i<nums.size();i++){
//             long long x=temp.popleft();
//             if(nums[i]==x){
//                 temp.erase();
//             }
//         }
//     //     set<int> s;
//     //     set<int>::iterator itr;
//     //     for(int i=0;i<k;i++){
//     //         s.insert(nums[i]);
//     //     }
//     //     if(s.size()==k){
//     //         for(auto x:s){
//     //             ans+=x;
//     //         }
//     //     }
//     //     for(int i=k;i<nums.size();i++){
//     //         s.erase(nums[i-k]);
//     //         ans-=nums[i-k];
//     //         s.insert(nums[i]);
//     //         if(s.size()==k){
//     //             long long temp=ans;
//     //             ans=max(temp,ans);
//     //         }
//     //     }
       return ans;
     }
};