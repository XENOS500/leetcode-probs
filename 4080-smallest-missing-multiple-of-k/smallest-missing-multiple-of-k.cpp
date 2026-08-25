class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++) freq[nums[i]]++;
        int i=1;
        while(true)
        {
            if(freq[i*k]<1)
            {
                break;
            }
            i++;
        }
        return i*k;
    }
};