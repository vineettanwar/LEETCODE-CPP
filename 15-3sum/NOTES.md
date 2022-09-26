int n=nums.size();
vector<vector<int>> ans;
set<vector<int>> s;
for(int i=0;i<n;i++){
for(int j=i+1;j<n && j!=i;j++){
for(int k=j+1;k<n && k!=j;k++){
if(nums[i]+nums[j]+nums[k]==0){
vector<int> temp;
temp.push_back(nums[i]);
temp.push_back(nums[j]);
temp.push_back(nums[k]);
sort(temp.begin(),temp.end());
s.insert(temp);
}
}
}
}
for(auto x:s){
ans.push_back(x);
}
return ans;