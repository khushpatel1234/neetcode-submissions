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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        TreeNode*temp = root;
        
    

       
        int level = 1;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            if(temp->right){
            temp = temp->right;}
            else if(temp->left)
            {
                temp= temp->left;
            }
            else{
                break;
            }
            level+=1;
        }
        cout<<level<<endl;
        temp = root;
        int check = 1;
        if(temp->left){
            temp  = temp->left;
            check+=1;
        }
        while(temp!=nullptr){
            if(check<=level){
                if(temp->right){
                    temp = temp->right;
                }
                else if(temp->left){
                    temp = temp->left;
                }
                else{
                    break;
                }
                check+=1;
            }
            else{
                ans.push_back(temp->val);
                if(temp->right){
                    temp = temp->right;
                }
                else if(temp->left){
                    temp = temp->left;
                }
                else{
                    break;
                }
                
            }
        }
        return ans;
    }
};
