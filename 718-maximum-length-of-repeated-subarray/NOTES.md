class Solution {
private:
int rec(int i,int j,int size,vector<int>& nums1, vector<int>& nums2){
if(i>=size || j>=size){
return 0;
}
int x=0;
int y=0;
if(nums1[i]==nums2[j])
x=1+rec(i+1,j+1,size,nums1,nums2);
else
y=rec(i+1,0,size,nums1,nums2);
return max(x,y);
}
public:
int findLength(vector<int>& nums1, vector<int>& nums2) {
return rec(0,0,nums1.size(),nums1,nums2);
}
};