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
    
    int check(TreeNode* temp, int k, vector<int>& ansi) {
    if (!temp) return -1;

    int left = check(temp->left, k, ansi);
    if (left != -1) return left;

    ansi.push_back(temp->val);
    if (ansi.size() == k) return temp->val;

    int right = check(temp->right, k, ansi);
    if (right != -1) return right;

    return -1;
}

int kthSmallest(TreeNode* root, int k) {
    vector<int> ansi;
    return check(root, k, ansi);
}

};
