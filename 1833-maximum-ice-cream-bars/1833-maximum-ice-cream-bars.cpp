class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        if(costs[0]>coins){
            return 0;
        }
        int total=0;
        for(auto x:costs){
            if(coins>=x){
                coins-=x;
                total++;
            }
        }
        return total;
    }
};