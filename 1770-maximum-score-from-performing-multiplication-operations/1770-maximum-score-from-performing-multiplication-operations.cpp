class Solution {
public:
    vector<vector<int>> dp;
    int findScore(int i,int left,int right, vector<int>& nums, vector<int>& multipliers)
    {
        int m = multipliers.size();
        if(i==multipliers.size())
        {
            return 0;
        }
        if(dp[i][left]!=INT_MIN)
        {
            return dp[i][left];
        }

int l = multipliers[i]*nums[left]+findScore(i+1,left+1,right,nums,multipliers);
int r = multipliers[i]*nums[right] + findScore(i+1,left,right-1,nums,multipliers);
        
        return dp[i][left] = max(l,r);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size();
        int m = multipliers.size();
     
     dp.assign(m + 1, vector<int> (m+1, INT_MIN));
     return  findScore(0,0,n-1,nums,multipliers);
    }
};
// class Solution {
//     private:
//     int dp[1001][1001];
// //     IF WE TRY TO MAKE DP SOLUTION WE HAVE 3 CHANGING STATES I,START, END
// //     RANGE IF I IS 1000 RANGE OF START END IS 10^5 
// //     CANNOT ALLOCATE SPACE > 10^7 THERE FORE WE HAVE TO REMOVE 1 STATE 
    
// //     // WE CAN GET END 
// //         I==NUMBERS USED 
// //         S= NUMBERS USED FROM START 
// //         NUMS.LENGTH =TOTAL ELEMENTS 
// //         THEREFORE END =(NUMS.LENGTH-I-S-1);
    
//     int help(int i,vector<int>&M,vector<int>&nums,int s,int e){
//         if(i==M.size()){
//             return 0;
//         }
       
//         if(dp[i][s]!=-1){
//             return dp[i][s];
//         }
//         // int e=nums.size()-(i-s)-1;
//         int op1=M[i]*nums[s] + help(i+1,M,nums,s+1,e);
//         int op2=M[i]*nums[e] + help(i+1,M,nums,s,e-1);
//         return dp[i][s]=max(op1,op2);
//     }
    
//     // RECURSIVE SOLUTION COMPLEXITY 2**M 
//     // int help(int i,vector<int>&M,vector<int>&nums,int s,int e){
//     //     if(i==M.size()){
//     //         return 0;
//     //     }
//     //     int op1=nums[s]*M[i] + help(i+1,M,nums,s+1,e);
//     //     int op2=nums[e]*M[i] + help(i+1,M,nums,s,e-1);
//     //     return max(op1,op2);
//     // }
// public:
//     int maximumScore(vector<int>& nums, vector<int>& M) {

//         //index for base case
//         //nums m start and end 
//         memset(dp,-1,sizeof(dp));
//         return help(0,M,nums,0,nums.size()-1);
        
        
//         // greedy fails
//         //         int l=0;
// //         int r=nums.size()-1;
// //         int score=0;
// //         for(int i=0;i<multipliers.size();i++){
// //             long long left=nums[l]*multipliers[i];
// //             long long right=nums[r]*multipliers[i];
// //             if(left>right){
// //                 score+=nums[l]*multipliers[i];
// //                 l++;
// //             }
// //             else{
// //                 score+=nums[r]*multipliers[i];
// //                 r--;
// //             }
            
// //         }
// //         return score;
        
//     }
// };