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
        //detecting the point of cycle
        ListNode* slow=head;
        ListNode* fast=head;
        bool iscyc=false;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                iscyc=true;
                break;
            }
        }
        if(iscyc==false){
            return NULL;
        }
        slow=head;
        // fast=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
        
    }
};