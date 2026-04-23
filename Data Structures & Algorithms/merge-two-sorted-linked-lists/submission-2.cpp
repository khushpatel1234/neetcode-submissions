/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp;
        ListNode*temp2;
        if(!list1 && list2){
             return list2;
        }
        else if (list1 && !list2){
            return list1;
        }
        else if(!list1 && !list2){
            return list1;
        }
        if(list1->val>list2->val){
            temp = list2;
            temp2 = list1;
        }
        else{
            temp = list1;
            temp2 = list2;
        }
        ListNode*ans = temp;
        while(temp || temp2){
            if(temp->next == nullptr && temp2){ 
                cout<<temp2->val<<endl;
                while(temp2){
                    temp->next = temp2;
                    temp = temp->next;
                    temp2 = temp2->next;
                }
            }
            if(!temp2){
                break;
            }
            if(temp->next->val<=temp2->val){
                temp = temp->next;
            }
            else{
                cout<<"hi"<<endl;
                ListNode* k = temp->next;
                temp->next = temp2;
                temp2 = temp2->next;
                temp = temp->next;
                temp->next = k;
            }
        }
        return ans;
    }
};
