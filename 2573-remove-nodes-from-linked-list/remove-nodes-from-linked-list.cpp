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
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;
        ListNode*temp=head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        vector<int> suffMax(n);
        suffMax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffMax[i]=max(suffMax[i+1],arr[i]);
        }
        int i=0;
        temp=head;
        ListNode *prev =nullptr;
        while(temp)
        {   
            if(temp->val<suffMax[i])
            {
                if(temp==head)
                {
                    head=head->next;
                    ListNode* del=temp;
                   
                    temp=temp->next;
                   
                    i++;
                    continue;
                }
                ListNode* del=temp;
                prev->next=prev->next->next;
                
                temp=temp->next;
                
                i++;
                continue;

            }
            prev=temp;
            temp=temp->next;
            i++;
        }
        return head;
    }
};