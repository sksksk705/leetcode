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
        //��� ���ڸ� ���ؼ� �Ѱ踦 �Ѿ�� ���� ��ȯ����
        /*int n = 0;
        while (head)
        {
            head = head->next;
            n++;
            if (n > 10000)
                return true;
        }
        return false;*/

        //��ȯ Ž�� �˰���
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