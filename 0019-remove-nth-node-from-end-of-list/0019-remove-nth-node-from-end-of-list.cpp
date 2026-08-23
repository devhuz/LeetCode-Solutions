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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            
            temp=temp->next;
            c++;
        }
        int n1=c-n;
        int n2=0;
        ListNode* prev=NULL;
        temp=head;
        if(n1==0){
            head=head->next;
            delete(temp);
            return head;
        }
        while(temp!=NULL){
            
            
            if(n2==n1){
                ListNode* d=prev->next;
            prev->next=d->next;
            delete(temp);
            break;
        }
        n2++;
        prev=temp;
        temp=temp->next;
        }

    return head;    
    }
};