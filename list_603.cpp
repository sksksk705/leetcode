/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //������������ �Ӹ����Ͱ� �ƴ϶�...
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode** slow = &head; ListNode* fast = head;
        while (n--) {
            fast = fast->next;
        }
        while (fast) {
            fast = fast->next;
            slow = &((*slow)->next);
;       }

        ListNode* entry = *slow;
        *slow = entry->next;
        delete entry;
        return head;
    }
};