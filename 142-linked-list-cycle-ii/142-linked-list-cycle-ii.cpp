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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL ||head->next==NULL) return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        int flag=0;
        while(fast->next!=NULL and fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                flag=1;
                break;
            }
        }
        if(flag==0) return NULL;
        slow=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
        
    }
};