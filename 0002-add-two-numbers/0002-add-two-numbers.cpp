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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* tail = result;
        int carry = 0;
        while(l1 !=NULL|| l2 !=NULL || carry != 0){
         int digit_l1=(l1 != NULL)? l1->val:0;
         int digit_l2=(l2 != NULL)? l2->val:0;
         int sum =digit_l1 + digit_l2 + carry;
         int digit = sum %10;
         
         carry= sum/10;
         ListNode* newNode = new ListNode(digit);
         tail->next = newNode;
         tail= newNode;
         l1 = (l1 != NULL) ? l1->next : NULL;
         l2 = (l2 != NULL) ? l2->next : NULL;
        }
        return result->next;


        
    }
};