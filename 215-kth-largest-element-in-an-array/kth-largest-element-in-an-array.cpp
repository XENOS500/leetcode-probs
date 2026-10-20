class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int num:nums) q.push(num);
        for(int i=0;i<nums.size();i++)
        {
            if(i==k-1) return q.top();
            else q.pop();
        }
        return -1;
    }
};