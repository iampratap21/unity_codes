/*
You are given two non-empty linked lists representing two non-negative integers.
 The digits are stored in reverse order, and each of their nodes contains a single digit. 
 Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start = new ListNode(0);
        ListNode* head = start;

        int carry = 0;
        while(l1 || l2) {
            int val1 = (l1 == NULL) ? 0 : l1->val;
            int val2 = (l2 == NULL) ? 0 : l2->val;

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            int last_dig = sum % 10;

            ListNode* temp = new ListNode(last_dig);
            start->next = temp;
            start = temp;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        // if carry is generated in the end
        if(carry > 0) {
            ListNode* temp = new ListNode(carry);
            start->next = temp;
        }

        return head->next;
    }
};