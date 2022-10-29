class Solution {
public:
    static bool comp(pair<int,int>p1,pair<int,int>p2){
        return p1.second>p2.second;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int start=0,ans=0;
        vector<pair<int,int>> arr;
        int n=plantTime.size();
        for(int i=0;i<n;i++){
            arr.push_back({plantTime[i],growTime[i]});
        }
        sort(arr.begin(),arr.end(),comp);
        for(int i=0;i<n;i++){
            start+=arr[i].first;
            ans=max(ans,start+arr[i].second);
        }
        return ans;
    }
};