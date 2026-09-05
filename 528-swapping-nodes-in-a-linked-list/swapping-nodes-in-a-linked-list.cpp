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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int cnt=1;
        while(temp)
        {
            temp=temp->next;
            cnt++;
        }
        ListNode* temp1=head;ListNode* temp2=head;
        int cnt1=1,cnt2=1;
        while(cnt1!=k)
        {
            temp1=temp1->next;
            cnt1++;
        }
        while(cnt2!=cnt-k)
        {
            temp2=temp2->next;
            cnt2++;
        }
        int dummy=temp1->val;
        temp1->val=temp2->val;
        temp2->val=dummy;
        return head;
    }
};