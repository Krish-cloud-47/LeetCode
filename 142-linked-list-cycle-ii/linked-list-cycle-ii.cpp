class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                ListNode* s = head;
                while (s != slow) {
                    s = s->next;
                    slow = slow->next;
                }
                return s;
            }
        }
    
        return nullptr;
    }
};