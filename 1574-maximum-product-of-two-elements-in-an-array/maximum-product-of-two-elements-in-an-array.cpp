class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0,smaxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                smaxi=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>smaxi)
            {
                smaxi=nums[i];
            }
        }
        int mm1=maxi-1,sm1=smaxi-1;
        return mm1*sm1;
    }
};