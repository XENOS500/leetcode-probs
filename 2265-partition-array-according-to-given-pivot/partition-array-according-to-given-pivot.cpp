class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> bef,aft;
        int piv =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) bef.push_back(nums[i]);
            else if(nums[i]>pivot) aft.push_back(nums[i]);
            if(nums[i]==pivot) piv++;
        }
        for(int i=0;i<bef.size();i++){
            nums[i]=bef[i];
        }
        for(int i=0;i<piv;i++){
            nums[i+bef.size()]=pivot;
        }
        for(int i=0;i<aft.size();i++){
            nums[i+bef.size()+piv]=aft[i];
        }
        return nums;
    }
};