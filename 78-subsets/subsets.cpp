class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>subset;
        createSubset(nums,0,res,subset);
        return res;
    }
    void createSubset(vector<int> &nums, int ind,vector<vector<int>> &res,vector<int>&subset)
    {
        if(ind==nums.size()) 
        {
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[ind]);
        createSubset(nums,ind+1,res,subset);

        subset.pop_back();
        createSubset(nums,ind+1,res,subset);

    }
};