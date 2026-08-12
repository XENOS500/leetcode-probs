class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int right=0,left=0,maxLength=0;
        unordered_map<int,int> freq;
        while(right<nums.size())
        {
            freq[nums[right]]++;
            if(freq[nums[right]]>k)
            {
                while(freq[nums[right]]>k)
                {freq[nums[left]]--;
                left++;
                }
                right++;
            }
            else 
            {
                maxLength=max(maxLength,right-left+1);
                right++;
            }
           
        } return maxLength;
    }
};