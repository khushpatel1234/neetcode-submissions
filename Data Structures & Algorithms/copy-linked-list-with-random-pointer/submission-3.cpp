/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*copyhead  = new Node(0);
        Node*temp = head;
        if(!head){
            return nullptr;
        }
        while(temp){
            Node*t = new Node(temp->val);
            Node*n = temp->next;
            temp->next = t;
            t->next = n;
            temp = n;
        }
        Node*tem1 = head->next;
        Node*tem2 = head;
        while(tem2){
            Node* r = tem2->random;
            if(r){
            tem1->random = r->next;}
            else{
                tem1->random = nullptr;
            }
            tem2 = tem2->next->next;
 
            tem1 = tem1->next ? tem1->next->next : nullptr;
            
        }
        Node*ans = head->next;
        tem2 = head;
        tem1 = ans;
       
        while(tem2){             
            tem2->next = tem2->next->next;
            tem1->next = tem1->next ? tem1->next->next : nullptr;
            tem2 = tem2->next;
            tem1 = tem1->next;
        }
        return ans;

    }
};
