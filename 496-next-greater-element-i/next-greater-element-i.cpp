class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;int index;
        for(int i=0;i<nums1.size();i++)
        {
            int index=-1,indexAns=-1;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j]) index=j;
            }
            for(int k=index;k<nums2.size();k++)
            {
                if(nums2[k]>nums2[index]){ indexAns=k;break;}
            }
            if(index==-1) ans.push_back(-1);
            else 
            {
                if(indexAns==-1) ans.push_back(-1);
                else ans.push_back(nums2[indexAns]);
            }
        }
        return ans;
    }
};