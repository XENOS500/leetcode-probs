class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       vector<int> ans;
       int freq=0;
       int small=0;
       for(int i=0;i<nums.size();i++)
       { if(nums[i]<target) small++;
        if(nums[i]==target) freq++;
       } 
       for(int i=0;i<freq;i++)
       {
        ans.push_back(small+i);
       }
       return ans;
    }
};