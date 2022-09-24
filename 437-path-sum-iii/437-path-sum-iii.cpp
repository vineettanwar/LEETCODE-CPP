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
    int total=0;
    void findpathsum(TreeNode* root, int tsum, long long csum){
        if(!root){
            return;
        }
        csum+=root->val;
        if(tsum==csum){
            total++;
        }
        findpathsum(root->left,tsum,csum);
        findpathsum(root->right,tsum,csum);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(!root){
            return 0;
        }
        findpathsum(root,targetSum,0);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return total;
        
    }
};