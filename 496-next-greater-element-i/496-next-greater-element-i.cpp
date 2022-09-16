class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> ans(nums2.size(),-1);
        // prepare ans array of next greater element from nums 2
        for(int i=0;i<nums2.size();i++){
            while(!s.empty() && nums2[s.top()]<nums2[i]){
                ans[s.top()]=nums2[i];
                s.pop();
            }
            s.push(i);
        }
       // store indexes of nums2 
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        // for(auto x: ans){
        //     cout<<x<<endl;
        // }
        
        
        // get indexes of element in in num2 and their corresponding next greater element
        vector<int> fnlans;
        for(int i=0;i<nums1.size();i++){
            int idx=mp[nums1[i]];
            fnlans.push_back(ans[idx]);
            }
        return fnlans;
        
    }
};