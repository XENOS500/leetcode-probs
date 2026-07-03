class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt=1,maxi=INT_MIN,n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]+1==nums[i+1])
            {
                cnt++;
                maxi=max(maxi,cnt);
            }
            else if(nums[i]==nums[i+1]) 
            {   continue;
                
            }
            else 
            {
                cnt=1;
            }
        }
        if(maxi==INT_MIN) return 1;
        else return maxi;
    }
};