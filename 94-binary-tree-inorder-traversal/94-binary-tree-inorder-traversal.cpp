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
    // void getinorder(TreeNode* root,vector<int> &ans){
    //     if(!root){
    //         return;
    //     }
    //     getinorder(root->left,ans);
    //     ans.push_back(root->val);
    //     getinorder(root->right,ans);
    //     return;
    // }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int> ans;
        // if(!root){
        //     return ans;
        // }
        // getinorder(root,ans);
        // return ans;
        stack<TreeNode*> s;
        vector<int>ans;
        TreeNode* curr=root;
        while(curr ||!s.empty()){
            while(curr){
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            ans.push_back(curr->val);
            curr=curr->right;
        }
        
        return ans;
        
    }
};