class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=0,sum=0;
        while(i+1 < nums.size() && nums[i]+1==nums[i+1] )
        {
            sum+=nums[i];
            i++;
        }
        sum+=nums[i];
        unordered_set<int> st(nums.begin(),nums.end());
        while(st.count(sum)) sum++;
        return sum;
    }
};