class Solution {
public:
    int sum ( vector<int> arr)
    {
        int sumi=0;
        for(int it:arr) sumi+=it;
        return sumi;
    }
    int minOperations(vector<int>& nums, int k) {
        return sum(nums)%k;
    }
};