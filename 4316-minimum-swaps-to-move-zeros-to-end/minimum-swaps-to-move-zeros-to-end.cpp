class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zer=0;
        for(int i=0;i<nums.size();i++) 
        {
            if(nums[i]==0) zer++;
        }
        int zer1=0;
        for(int i=0;i<zer;i++)
        {
            if(nums[nums.size()-i-1]==0)
                zer1++;
        }
        return zer-zer1;
    }
};