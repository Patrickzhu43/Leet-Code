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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> vals;
        while (head != nullptr) {
            if (vals.find(head) != vals.end()) {
                return true;
            }
            vals.insert(head);
            head = head->next;
        }
        return false;
    }
};