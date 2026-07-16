class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0,jumps=0,fathest=0;
        int n=nums.size();
        while(r<n-1)
        {
            fathest=0;
            for(l;l<=r;l++) fathest =max(fathest,l+nums[l]);
            
                l=r+1;
                r=fathest;jumps++;
            
        }
        return jumps;
    }
};