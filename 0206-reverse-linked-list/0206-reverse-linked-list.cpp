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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL|| head->next==NULL ){
           return head;
        }
        vector<int> values;
        ListNode* current=head;
        while(current){
            values.push_back(current->val);
            current = current->next;
        }
        reverse(values.begin(), values.end());

        ListNode* newList = new ListNode(values[0]);
        current=newList;
        for(size_t i=1;i<values.size();i++){
            current->next=new ListNode(values[i]);
            current=current->next;
        }

        return newList;
    }
};