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
public:
bool pathsum(TreeNode* root,int sum,int targetsum){
    if(root==NULL)
    return false;
    sum+=root->val;
    if(root->left ==NULL && root->right == NULL){
       if(sum==targetsum)
    return true;
    }
     return pathsum(root->left,sum,targetsum) || pathsum(root->right,sum,targetsum);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
       return pathsum(root,sum,targetSum);        
    }
};