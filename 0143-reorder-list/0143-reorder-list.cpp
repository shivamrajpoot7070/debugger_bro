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
    ListNode* reverse(ListNode* head){

        ListNode* prev=NULL;

        while(head!=NULL){

            ListNode* curr=head->next;
            head->next=prev;
            prev=head;
            head=curr;
        }

        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* revhead=reverse(slow->next);
        slow->next=NULL;

        ListNode* temp=head;

        while(revhead!=NULL){

            ListNode* headnext=temp->next;
            ListNode* revnext=revhead->next;
            temp->next=revhead;
            temp=headnext;
            revhead->next=temp;
            revhead=revnext;
        }

        return;
    }
};