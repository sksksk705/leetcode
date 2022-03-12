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
    ListNode* reverseList(ListNode* head) {
        //값을 바꾸는 방법1
        /*ListNode* temp = head;
        stack <int> s;
        while (temp) {
            s.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp) {
            temp->val = s.top();
            s.pop();
            temp = temp->next;
        }
        return head;*/

        //방향을 반대로
        ListNode* pre = new ListNode(0), *cur = head;
        pre->next = head;
        while (cur && cur->next) {
            // 0 -> 1(cur) -> 2 -> 3 -> 4
            // 0 -> 2 -> 1(cur) -> 3 -> 4 
            // 0 -> 3 -> 2 -> 1(cur) -> 4
            // 0 -> 4 -> 3 -> 2 -> 1(cur)
            // return 4;
            ListNode* temp = cur->next;
            cur->next = temp ->next;
            temp->next = pre->next;
            pre->next = temp;
        }
        return pre->next;

    }
};