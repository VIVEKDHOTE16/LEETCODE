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
    ListNode* reverselinklist(ListNode* temp){
        ListNode* tempp=temp;
        ListNode* prev=nullptr;
        while(tempp!=nullptr){
            ListNode* front=tempp->next;
            tempp->next=prev;
            prev=tempp;
            tempp=front;
        }
        return prev;
    }
    ListNode* getkthnode(ListNode* temp,int k){
        k -= 1;
        while(temp!=nullptr && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            ListNode* kthnode=getkthnode(temp,k);
            if(kthnode==nullptr){
                if(prev) prev->next=temp;
                break;
            }
            ListNode* nextnode=kthnode->next;
            kthnode->next=NULL;
            reverselinklist(temp);
            if(temp==head){
                head=kthnode;
            } else{
                prev->next=kthnode;
            }
            prev=temp;
            temp=nextnode;
        }
        return head;
        
    }
};