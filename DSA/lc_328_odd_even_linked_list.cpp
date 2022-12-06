
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;

        ListNode*ot = head;
        ListNode* eh = head->next , *et = head->next;

        while(et && et->next != NULL) {
            ot->next = ot->next->next;
            ot = ot->next;
            
            et->next = et->next->next;
            
            et = et->next;
        }
        ot->next = eh;
        return head;
    }
};