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
void helper(TreeNode* root, int lvl, int &ans){
    if(root==NULL)return;
    if(lvl > ans)ans=lvl;
    helper(root->left,lvl+1, ans);
    helper(root->right, lvl+1, ans);
}
    int maxDepth(TreeNode* root) {
        int ans =0;
        helper(root,1,ans);
        return ans;
    }
};
