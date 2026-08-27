class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++) {
            freq[nums1[i]] = 1;
        }
        for(int i = 0; i < nums2.size(); i++) {
            if(freq[nums2[i]] == 1) {
                res.push_back(nums2[i]);
                freq[nums2[i]] = 0; 
            }
        }
        
        return res;
    }
};