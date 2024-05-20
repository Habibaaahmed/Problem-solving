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
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* ptr_1 = dummy;
        ListNode* ptr_2 = dummy;

        // Move first pointer n steps ahead
        for (int i = 1; i <= n + 1; ++i) {
            ptr_1 = ptr_1->next;
        }
         while (ptr_1 != nullptr) {
            ptr_1 = ptr_1->next;
            ptr_2 = ptr_2->next;
        }
        ListNode* nodeToRemove = ptr_2->next;
        ptr_2->next = nodeToRemove->next;
        
        delete nodeToRemove;
        return dummy->next;

                    
        
    }
};