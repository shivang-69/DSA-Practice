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
        ListNode* prev=NULL;

       int l=0;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }

        if(l==n) {
            return head->next;
        }

        int x=l-n;

        temp=head;

        while(x!=0){
            prev=temp;
            temp=temp->next;
            x--;

        }

        ListNode* a=temp->next;

        prev->next=a;


        return head;


        
    }
};