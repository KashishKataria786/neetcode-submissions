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
void dfshelper(TreeNode* root, priority_queue<int>&q, int k){
    if(root==NULL) return;
    q.push(root->val);
    if(q.size()>k){
        q.pop();
    }
    if(root->left)dfshelper(root->left, q,k);
    if(root->right)dfshelper(root->right, q,k);
}
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>q;
        dfshelper(root, q, k);
        return q.top();
    }
};
