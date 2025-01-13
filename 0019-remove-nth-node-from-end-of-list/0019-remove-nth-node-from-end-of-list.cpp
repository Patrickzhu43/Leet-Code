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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while (temp) {
            count++;
            temp = temp->next;
        }
        int length = count - n + 1;
        ListNode* cur = head;
        ListNode* prev = nullptr;
        for (int i = 1; i < length; i++) {
            prev = cur;
            cur = cur->next;
        }
        if (!prev) {
            head = head->next;
            return head;
        }
        else {
            prev->next = prev->next->next;
            return head;
        }
    }
};