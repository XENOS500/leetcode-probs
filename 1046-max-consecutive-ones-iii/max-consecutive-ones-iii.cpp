class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,maxi=0,zcnt=0;
        for(int r=0;r<nums.size();r++)
        {
            if(nums[r]==0) zcnt++;
            if(zcnt>k)
            {
                if(nums[l]==0)
                {
                    zcnt--;
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};