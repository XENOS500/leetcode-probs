class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long long XOR=0;
        for(int i=0;i<n;i++) XOR=XOR^nums[i];
        int XOR1=0,XOR2=0;
        long long rightmost=(XOR&(-XOR));
        for(int i=0;i<n;i++)
        {
            if(nums[i]&rightmost)
            {
                XOR1=XOR1^nums[i];
            }
            else 
            {
                XOR2=XOR2^nums[i];
            }
        }
        if(XOR2>XOR1)   return {XOR1,XOR2};
        return {XOR2,XOR1};
    }
};