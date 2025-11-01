/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> map;
        if(head==NULL){
            return NULL;
        }//building a copied List
        Node* oldtemp=head->next;
        Node* newhead= new Node(head->val);
        Node* newtemp=newhead;
        map[head]=newhead;


        while(oldtemp!=nullptr){
            Node* copynode = new Node(oldtemp->val);
            map[oldtemp]=copynode;
            newtemp->next=copynode;
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        //random pointers giving 
        newtemp=newhead;
        oldtemp=head;
        while(oldtemp!=NULL){
            newtemp->random=map[oldtemp->random];
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        return newhead;
        
    }
    

};