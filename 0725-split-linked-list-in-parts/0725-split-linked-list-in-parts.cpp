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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);
        // major steps to solve this particular question are - 1. calculate the division of the array as if lets say 10 is the size of the linked list then 10 mod 3 equals 1 means 3 , 3, 3, with 1 in any of the one ( particularly 1st so size is 4 , 3, 3) for this step we need to fetch the length of the linked list also 
        // now the next we need to traverse the linked list upto that given length ( 4) and then cut at that length say 1-2-3-4 then cut , then in next ( 3)  5- 6- 7 and then 8 - 9 - 10 
        // this is 2 major things in the question 
        // GET THE LENGTH OF THE LL 
        int n = 0 ;
        ListNode* current = head;
        while(current!= NULL){
            n++ ; 
            current = current ->next;
        }
        int splitn = n / k  , remainings = n%k;
        current = head;
        ListNode* p = current;
        for(int i = 0 ; i<k ; i++){
            
            ListNode* newpart = current;
            int currsize = splitn;
            if(remainings >0){
                remainings-- , currsize++;
            }

            //traversing to the end of the new parts
            int j = 0 ;
            while(j < currsize){
                p = current;
                if(current!= NULL){
                    current = current -> next;
                }
                j++;
            }
            //cutting the rest of the LL
            if(p != NULL){
                p->next = nullptr;
            }
            ans[i] = newpart;
        }

        return ans;
    }
};