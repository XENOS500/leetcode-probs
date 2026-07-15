class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {   int grt=-1;
            for(int j=i+1;j<nums.size()+i;j++)
            {
                if(nums[j%nums.size()]>nums[i])
                {
                    grt=nums[j%nums.size()];break;
                }
            }
            if(grt!=-1) ans[i]=grt;
            else if(grt==-1) ans[i]=-1;
        }
        return ans;
    }
};