class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr || p->val != q->val) {
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (isSameTree(root, subRoot)) {
            return true;
        }
        if (root == nullptr || subRoot == nullptr) {
            return false;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};