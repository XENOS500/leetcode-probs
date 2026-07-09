class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixsum_count;
        prefixsum_count[0]=1;
        int currsum=0,totalsubarr=0;
        for(int num:nums)
        {
            currsum+=num;
            if(prefixsum_count.find(currsum-k)!=prefixsum_count.end())
            {
                totalsubarr+=prefixsum_count[currsum-k];
            }
            prefixsum_count[currsum]++;
        }
        return totalsubarr;
    }
};