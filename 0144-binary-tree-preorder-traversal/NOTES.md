# recursive
class Solution {
private:
void preorder(vector<int>&ans,TreeNode*root){
if(!root){
return;
}
ans.push_back(root->val);
preorder(ans,root->left);
preorder(ans,root->right);
}
public:
vector<int> preorderTraversal(TreeNode* root) {
vector<int>ans;
if(!root){
return ans;
}
preorder(ans,root);
return ans;
#         ITERATUVE
​
}
};