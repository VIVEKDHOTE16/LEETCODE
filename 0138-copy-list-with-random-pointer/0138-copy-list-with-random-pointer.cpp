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
    void insertcopynode(Node* head){
        Node* temp=head;
        while(temp != NULL){
            Node* nextelement=temp->next;
            Node* copy= new Node(temp->val);

            copy->next=nextelement;
            temp->next=copy;

            temp=nextelement;
        }
    }
    void connectrandompointers(Node* head){
        Node* temp=head;
        while(temp != NULL){
            Node* copynode=temp->next;

            if(temp->random){
                copynode->random=temp->random->next;
            }
            else{
                copynode->random=nullptr;
            }
            temp=temp->next->next;
        }
    }
    Node* getcopylist(Node* head){
        Node* temp=head;
        Node* dummy= new Node(-1);
        Node* res=dummy;
        while(temp != NULL){
            res->next=temp->next;
            res=res->next;

            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummy->next;
    }


public:
    Node* copyRandomList(Node* head) {
        insertcopynode(head);
        connectrandompointers(head); 
        return getcopylist(head);
    }
};