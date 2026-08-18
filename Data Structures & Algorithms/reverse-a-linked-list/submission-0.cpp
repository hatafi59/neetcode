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
         vector<int> vals;
        while (head) {
            vals.push_back(head->val);
            head = head->next;
        }

        reverse(vals.begin(), vals.end());

        ListNode* dummy = new ListNode(); 
        ListNode* curr = dummy;

        for (int v : vals) {
            curr->next = new ListNode(v);
            curr = curr->next;
        }

        return dummy->next;
    }
};
