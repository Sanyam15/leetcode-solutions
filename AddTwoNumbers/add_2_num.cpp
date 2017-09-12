/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* start = new ListNode(0);
        ListNode* d = start;
        while(l1!=NULL&&l2!=NULL)
        {
            int sum  = l1->val+l2->val+carry;
            carry = sum/10;
            l1 = l1->next;
            l2 = l2->next;
            d->next = new ListNode(sum % 10);
            d = d->next;
        }
        while(l1!=NULL)
        {
            int sum = l1->val+carry;
            carry = sum/10;
            l1 = l1->next;
            d->next = new ListNode(sum % 10);
            d = d->next;
        }
        while(l2!=NULL)
        {
            int sum = l2->val+carry;
            carry = sum/10;
            l2 = l2->next;
            d->next = new ListNode(sum % 10);
            d = d->next;
        }
        while(carry)
        {
            d->next = new ListNode(carry % 10);
            d = d->next;
            carry/=10;
        }
        return start->next;
    }
};
