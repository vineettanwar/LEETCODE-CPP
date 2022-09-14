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
    int ans=0;
    private:
    bool ispalindromic(int freq[]){
        bool oddlen=false;
        for(int i=0;i<=9;i++){
            if(freq[i]%2!=0){
               if(oddlen==true){
                   return false;
               }
                else{
                    oddlen=true;
                }
            }
        }
        return true;
    }
    void helper(TreeNode* root,int freq[]){
        if(!root){
            return;
        }
        freq[root->val]++;
        if(root->left==NULL && root->right==NULL){
            if(ispalindromic(freq)){
                ans++;
            }
        }
        helper(root->left,freq);
        helper(root->right,freq);
        freq[root->val]--;
        return;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        int freq[10]={0};
        helper(root,freq);
        return ans;
        
    }
};