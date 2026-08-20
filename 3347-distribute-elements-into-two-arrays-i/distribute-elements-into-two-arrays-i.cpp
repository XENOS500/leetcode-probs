class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1,arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int j1=0,j2=0;
        for(int i=2;i<nums.size();i++)
        {
            if(arr1[j1]>arr2[j2])
            {
                arr1.push_back(nums[i]);
                j1++;
            }
            else 
            {
                arr2.push_back(nums[i]);
                j2++;
            }
        }
        for(int i=0;i<arr2.size();i++)
        {
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};