class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int max_xor=2048;
        vector<bool> pair_xor(max_xor,false);
        vector<bool> triplet_xor(max_xor,false);
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                pair_xor[nums[i]^nums[j]]=true;
            }
        }
        for(int i=0;i<max_xor;i++)
        {
            if(!pair_xor[i]) continue;
            for(int el:nums)
            {
                triplet_xor[i^el] =true;
            }
        }
        int cnt=0;
        for(int i=0;i<max_xor;i++)
        {
            if(triplet_xor[i]) cnt++;
        }
        return cnt;
    }
};