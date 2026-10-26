class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            count++;    
        }
        int pfl = (count-n)+1;
        
        
        if (count == n) {
            return head->next;
        }

        temp = head;
        for (int i = 1; i < pfl - 1; i++) {
            temp = temp->next;
        }

        if (n == 1) {
            temp->next = nullptr;
        }
        else {
            temp->next = temp->next->next;
        }
        
        return head;
    }
};