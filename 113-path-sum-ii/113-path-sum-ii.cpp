/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    void recursion(TreeNode* root,int s, vector<int> &ans, vector<vector<int>> &res){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(root->val==s){
                res.push_back(ans);
                ans.pop_back();
                return;
            }
        }
        recursion(root->left,s-root->val,ans,res);
        recursion(root->right,s-root->val,ans,res);
        ans.pop_back();
        return;
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        vector<vector<int>> res;
        recursion(root,targetSum,ans,res);
        return res;
        
        
    }
};