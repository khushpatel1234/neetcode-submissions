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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = head;
        ListNode* start1 = head;
        int len = 0;
        while(start1){
            start1 = start1->next;
            len+=1;
        }

        for(int t = 1;t<len-n;t++){
            start = start->next;
        }
       if(len == 1){
        return nullptr;
       }
       else if(len == n){
        head = head->next;
        return head;
       }
        ListNode *temp = start->next->next;
        start->next = temp;
        return head;
    }
};
