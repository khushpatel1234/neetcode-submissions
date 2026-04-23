class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compare(p, q);
    }

    bool compare(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;

        if (p == NULL || q == NULL)
            return false;

        if (p->val != q->val)
            return false;

        return compare(p->left, q->left) &&
               compare(p->right, q->right);
    }
};
