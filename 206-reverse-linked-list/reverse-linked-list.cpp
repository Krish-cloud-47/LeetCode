class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = nullptr; 
        ListNode* c = nullptr; 
        ListNode* n = head;    

        while (n != nullptr) {
            c = n;
            n = n->next;
            c->next = p;
            p = c;
        }

        return p; 
    }
};