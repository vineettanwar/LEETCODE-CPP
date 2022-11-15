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
    int left_height(TreeNode* root){
        int count=0;
        while(root!=NULL){
            count+=1;
            root=root->left;
            
        }
        return count;
    }
    int right_height(TreeNode* root){
        int count=0;
        while(root!=NULL){
            count+=1;
            root=root->right;
            
        }
        return count;
    }
public:
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lh=left_height(root);
        int rh=right_height(root);
        if(lh==rh){
            return((1<<lh)-1);
        }
        else{
            return 1+ countNodes(root->left)+countNodes(root->right);
        }
    }
};