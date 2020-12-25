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
    ListNode* swapPairs(ListNode* head) {
        ListNode* pre = new ListNode(0);
        pre->next = head;
        ListNode* cur = pre;
        while (cur->next && cur->next->next){
            ListNode* first = cur->next;
            ListNode* third = cur->next->next->next;
            cur->next = first->next;
            cur->next->next = first;
            first->next = third;
            cur = first;
        }
        return pre->next;
    }
};
