class Solution {
public:
    vector<vector<int>> find_comb(int ind,int target,vector<int> &arr,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(ind==arr.size()){
            if(target==0)
            {
                ans.push_back(ds);
            }
            return {};
        }
        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            find_comb(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        find_comb(ind+1,target,arr,ans,ds);
        return ans;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        find_comb(0,target,candidates,ans,ds);
        return ans;
    }
};