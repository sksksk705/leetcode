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
    bool isPalindrome(ListNode* head) {

        //O(n), O(n);
        stack<int> s;
        ListNode* temp = head;
        while (temp) {
            s.push(temp->val);
            temp = temp->next;
        }
        while (!s.empty()) {
            if (s.top() != head->val)
                return false;
            s.pop(); head = head->next;
        }
        return true;
    }

    // O(n) , O(1);
    //리스트의 반을 찾아 2개로 나누고
    //앞의 리스트는 반전시킨 뒤 두 리스트를 비교하는 것.

   
};