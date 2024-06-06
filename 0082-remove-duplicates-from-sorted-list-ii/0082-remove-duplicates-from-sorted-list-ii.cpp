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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res=new ListNode(0);
        res->next=head;
         ListNode* prev=res;
         //p  p1  p2
         //0 , 1 , 2 , 3 , 3 , 4 , 4 , 5
         while(prev->next && prev->next->next){
            if(prev->next->val == prev->next->next->val){
                int dublicate=prev->next->val;
                while(prev->next && prev->next->val==dublicate){
                prev->next=prev->next->next;
                }
            }else{
                prev=prev->next;

            }

         }


     

        
        return res->next;
    }
};