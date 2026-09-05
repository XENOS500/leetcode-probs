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
    ListNode* sortList(ListNode* head) {
        vector < int> arr;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            arr.push_back(temp->val);
            temp=temp-> next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        int cnt=0;
        while(temp!=nullptr)
        {   temp->val=arr[cnt];
            cnt++;
            temp=temp->next;
        }
        return head;
    }
};