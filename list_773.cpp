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
    bool hasCycle(ListNode* head) {
        //계속 숫자를 더해서 한계를 넘어가는 순간 순환판전
        /*int n = 0;
        while (head)
        {
            head = head->next;
            n++;
            if (n > 10000)
                return true;
        }
        return false;*/

        //순환 탐지 알고리즘
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                return true;
        }
        return false;
    }
};