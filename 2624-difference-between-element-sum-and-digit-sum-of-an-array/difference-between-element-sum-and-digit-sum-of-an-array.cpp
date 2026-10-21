class Solution {
public:
    int sum_dig(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int el_sum=0,dig_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            el_sum+=nums[i];
            dig_sum+=sum_dig(nums[i]);
        }
        return abs(el_sum - dig_sum);
    }
};