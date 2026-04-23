class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Handle edge cases
        if (!list1) return list2;
        if (!list2) return list1;
        
        ListNode* temp;
        ListNode* temp2;
        
        // Determine which list starts with smaller value
        if (list1->val > list2->val) {
            temp = list2;
            temp2 = list1;
        } else {
            temp = list1;
            temp2 = list2;
        }
        
        ListNode* ans = temp;
        
        while (temp && temp2) {
            // If we've reached the end of temp list, attach remaining temp2
            if (temp->next == nullptr) {
                temp->next = temp2;  // Attach entire remaining list
                break;  // Exit loop
            }
            
            // If next node in temp is <= current node in temp2, advance temp
            if (temp->next->val <= temp2->val) {
                temp = temp->next;
            } else {
                // Insert temp2 node between temp and temp->next
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