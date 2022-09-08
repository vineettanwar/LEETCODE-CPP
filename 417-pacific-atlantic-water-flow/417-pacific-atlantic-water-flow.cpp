class Solution {
public:
    vector<vector<bool>> atlantic,pacific;
    vector<vector<int>> ans;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if(!heights.size()){
            return ans;
        }
        int m=heights.size();
        int n=heights[0].size();
        atlantic=pacific=vector<vector<bool>>(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            dfs(heights,pacific,i,0);
            dfs(heights,atlantic,i,n-1);
            
        }
        for(int i=0;i<n;i++){
            dfs(heights,pacific,0,i);
            dfs(heights,atlantic,m-1,i);
        }
        return ans;
    }
    void dfs(vector<vector<int>>&heights,vector<vector<bool>> &visited,int i,int j){
        int m=heights.size();
        int n=heights[0].size();
        if(visited[i][j]){
            return;
        }
        visited[i][j]=true;
        if(atlantic[i][j] && pacific[i][j]){
            ans.push_back(vector<int>{i,j});
        }
        if(i+1<m && heights[i+1][j]>=heights[i][j]){
            dfs(heights,visited,i+1,j);
        }
        if(i-1>=0 && heights[i-1][j]>=heights[i][j]){
            dfs(heights,visited,i-1,j);
        }
        if(j+1<n && heights[i][j+1]>=heights[i][j]){
            dfs(heights,visited,i,j+1);
        }
        if(j-1>=0 && heights[i][j-1]>=heights[i][j]){
            dfs(heights,visited,i,j-1);
        }
    }
};