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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       vector<ListNode*> parts(k,nullptr);
       ListNode* temp=head;
       int cnt=0;
       while(temp){
            cnt++;
            temp=temp-> next;
       }
       int n=cnt/k,r=cnt%k;
       temp=head;
       ListNode* prev=nullptr;
       for(int i=0;temp&&i<k;i++,r--)
       {
        parts[i]=temp;
        for(int j=0;j<n+(r>0);j++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=nullptr;
       }
        return parts;
    }
};