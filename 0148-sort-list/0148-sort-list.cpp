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
  ListNode* mergeSortTwoLists(ListNode* l1, ListNode* l2){
    if(!l1) return l2;
    if(!l2) return l1;

    ListNode* newHead = l1->val <= l2->val ? l1 : l2;
    if(l1->val <= l2->val)
        newHead->next = mergeSortTwoLists(l1->next, l2);
    else
        newHead->next = mergeSortTwoLists(l1, l2->next);

    return newHead;
}

ListNode* sortList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode* slow, *fast, *prev = NULL;
    slow = fast = head;

    while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = NULL; // break into two list at [start, mid] and [mid+1, end]
    return mergeSortTwoLists(sortList(head), sortList(slow));
}
};