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

   ListNode* reverse(ListNode* slow){
    ListNode* temp=slow;
    if(temp==NULL || temp->next==NULL) return temp;

    ListNode* re=reverse(temp->next);

    temp->next->next=temp;
    temp->next=NULL;

    return re; 
   }
    void reorderList(ListNode* head) {

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* rev= reverse(slow);
        ListNode* curr=head;
        while(rev->next){
            ListNode* t1=curr->next;
            curr->next=rev;

            ListNode* t2=rev->next;
            rev->next=t1;

            curr=t1;
            rev=t2;
        }

        


        
    }
};