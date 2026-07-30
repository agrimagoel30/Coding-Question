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
int ans=0;
void helper(TreeNode* root,long long sum,long long targetSum){
    if(root==NULL)
    return;
    if(sum+root->val==targetSum)
    ans++;
    helper(root->left,sum+root->val,targetSum);
    helper(root->right,sum+root->val,targetSum);
}
void dfs(TreeNode* root,long long targetSum){
    if(root==NULL)
    return;
    helper(root,0LL,targetSum);
    dfs(root->left,targetSum);
    dfs(root->right,targetSum);
}
int pathSum(TreeNode* root,int targetSum){
  dfs(root,targetSum);
  return ans;
    }
};