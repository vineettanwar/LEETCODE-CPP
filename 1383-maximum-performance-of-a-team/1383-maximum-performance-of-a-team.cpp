class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> v;
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        //bind speed and efficiency of engineer together
        for(int i=0;i<n;i++){
            v.push_back({efficiency[i],speed[i]});
        }
        
        long sum=0,ans=0;
        
        //sort engineer on basis of efficiency 
        sort(v.begin(),v.end());
        
        //start from end maximum efficiency 
        for(auto i=n-1;i>=0;i--){
            sum+=v[i].second;
            pq.push(v[i].second);
            //if > k remove the engineer with smallest speed so that change is minimum
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            //calculate answer for ATMOST k engineer(MEANS WE CAN TAKE LESS THAN K IN TEAM).
            ans=max(ans,sum*v[i].first);
        }
        //RETURN ANSWER
        return ans%1000000007;
        
    }
};