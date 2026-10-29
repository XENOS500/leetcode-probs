class Solution {
public:
    int arraySign(vector<int>& nums) {
        int total=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) return 0;
            if(nums[i]<0) total*=-1;
        }
        if(total>0) return 1;
        return -1;
    }
};