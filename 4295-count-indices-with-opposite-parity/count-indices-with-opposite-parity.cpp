class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {   int cnt=0;
            if(nums[i]%2==0)
            {
                for(int j=i+1;j<nums.size();j++) if(nums[j]%2==1) cnt++;
            }
           else 
            {
                for(int j=i+1;j<nums.size();j++) if(nums[j]%2==0) cnt++;
            }
         nums[i]=cnt;
        }
        return nums;
    }
};