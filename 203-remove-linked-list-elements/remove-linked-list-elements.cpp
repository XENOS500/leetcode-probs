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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL||(head->next==NULL&&head->val!=val))  return head;
        if(head->next==NULL&&head->val==val) return NULL;
   
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
        // {    if(temp->next==NULL)
        //      {
        //         prev->next=NULL;
        //         ListNode* del=temp;
        //         temp=temp->next;
        //      }
            if(temp->val==val)
            {   if(temp==head)
            {   temp=temp->next;
                head=head->next;
                continue;
            }
                prev->next=temp->next;
                ListNode* del=temp;
                temp=temp->next;
                delete del;
            }
            else 
        {    prev=temp;
            temp=temp->next;
           
        }
        }
        return head;
    }
};