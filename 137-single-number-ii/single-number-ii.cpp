class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int> freq;
        for(auto it :nums)
        {
            freq[it]++;
        }
        int ans=0;
        for(auto it:freq)
        {
            if(it.second==1) ans=it.first;
        }
        return ans;
    }
};