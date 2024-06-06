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
    ListNode* partition(ListNode* head, int x) {
        ListNode *right_part=new ListNode(0);
        ListNode *left_part=new ListNode(0);
        ListNode *leftPtr=left_part;
        ListNode *rightPtr=right_part;
        
        if(!head) return head;
        
        while(head){
            if(head->val <x){
                ListNode *newNode=new ListNode(head->val);
                left_part->next=newNode;
                left_part=left_part->next; 
    
            }else{
                ListNode *newNode=new ListNode(head->val);
                right_part->next=newNode;
                right_part=right_part->next;
            }
             head=head->next;
        }
        
        left_part->next=rightPtr->next;
        return leftPtr->next;
    }
};