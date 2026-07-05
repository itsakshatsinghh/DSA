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
        //first check the cycle ( the point where f and s collides and after than once its confirmed then move the f to head but keep the s pointer where the collision happens) now move the s pointer one step and also the f pointer one step , they will collide again where the the thing has happend - keep the index and return it 
        
        //////////// x2
        if(!head|| !head->next ){
            return NULL;
        }
        ListNode* s = head;
        ListNode* f = head;
        bool hascycl = false;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
            
            if(s==f){
                hascycl = true;
                break;
            }
        }
        if(!hascycl){
            return nullptr;
        }
        //we need to find the index so reset f = head 
        f=head;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        return s;
    }
};