class Solution {
public:
    int count(vector<int>& nums, int m)
    {   int cnt=1;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]+sum<=m) 
            {
                sum+=nums[i];
            }
            else 
            {
                cnt++;
                sum=nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int low= *max_element(nums.begin(),nums.end());
        int high= accumulate(nums.begin(),nums.end(),0);
        if(k>nums.size()) return -1;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(count(nums,mid)<=k)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};