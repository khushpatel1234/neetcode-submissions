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
    int ans(TreeNode* temp,int &count,set<int>mp){
        if(!temp){
            return 0;
        }
        
        mp.insert(temp->val);
        
        auto itr = mp.end();
   
        

        if(mp.empty()||temp->val>=*prev(itr)){
            count+=1;
        }
        ans(temp->left,count,mp);
        ans(temp->right,count,mp);
        return count;

    }
    int goodNodes(TreeNode* root) {
        set<int> mp;
        int count = 0;
        TreeNode* temp = root;
        
        count = ans(temp,count,mp);
        return count;
    }
};
