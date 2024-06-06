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
        if(!head){
            return false;
        }
      ListNode *  fastPtr=head;
      ListNode *  slowPtr=head;
      while(fastPtr->next && fastPtr->next->next){
          slowPtr=slowPtr->next;
          fastPtr=fastPtr->next->next;
          if(fastPtr==slowPtr){
              return true;
          }
      }
       return false ;
    }
};