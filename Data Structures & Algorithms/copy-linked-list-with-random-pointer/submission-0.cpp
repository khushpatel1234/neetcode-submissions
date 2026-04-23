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
        if(head == nullptr){
            return nullptr;
        }
        Node* temp = head;
        map<Node*,Node*> mp;
        Node* copy = new Node(temp->val);
        Node* ans = copy;
        Node* fina = ans;
      
        mp[temp] = copy;
        temp = temp->next;
        mp[nullptr] = nullptr;
        cout<<"hi"<<endl;
        while(temp){
            
            Node* newcopy = new Node(temp->val);
            copy->next = newcopy;
            mp[temp] = newcopy; 
            temp = temp->next;
            copy = copy->next;
         
        }
        cout<<"hello"<<endl;
       
        
        while(head){
            ans->random = mp[head->random];
            head = head->next;
            ans = ans->next;
        }
return fina;
    }
};
