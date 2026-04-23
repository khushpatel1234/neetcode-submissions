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
    int dfs(TreeNode* p, TreeNode* q, int &t){
        if(p==nullptr&&q==nullptr){
            return 0;
        }
        else if(!p && q){
            t = 1;
        }
        else if(p&&!q){
            t = 1;
        }
        else if(p->val!=q->val){
            t = 1;
        }
        else if(p->val==q->val){
            dfs(p->left,q->left,t);
            dfs(p->right,q->right,t);
        }
        return 0;
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int t = 0;
        dfs(p,q,t);
        if(t ==1){
            return false;
        }
        else{
            return true;
        }
    }
};
