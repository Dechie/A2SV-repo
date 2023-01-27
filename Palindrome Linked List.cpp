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

        ListNode* temp = new ListNode;

        stack<int> hold;

        for (temp = head; temp != nullptr; temp = temp->next)
        {
            hold.push(temp->val);
        }

        temp = head;

        for (; temp != nullptr; temp = temp->next)
        {
            int comp = hold.top();
            hold.pop();
            if (temp->val != comp)
                return false;
        }

        return true;
    }
};
