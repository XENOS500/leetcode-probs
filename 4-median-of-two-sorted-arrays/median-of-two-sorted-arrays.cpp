class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>newr;
        for(auto it:nums1)  newr.push_back(it);        
        for(auto it:nums2)  newr.push_back(it);      
        sort(newr.begin(),newr.end());
        int n=newr.size();
        if(n%2==0) return ((newr[n/2]+newr[n/2-1])/2.0);
        return newr[n/2];

    }
};