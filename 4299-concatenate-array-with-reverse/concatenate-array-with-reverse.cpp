class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> numscpy=nums;
        reverse(numscpy.begin(),numscpy.end());
        for(int i=0;i<numscpy.size();i++)
        {
            nums.push_back(numscpy[i]);
        }
        return nums;
    }
};