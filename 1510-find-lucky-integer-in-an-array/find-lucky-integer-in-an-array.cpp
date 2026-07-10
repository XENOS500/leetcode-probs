class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> f;
        for(auto it:arr)
        {
            f[it]++;
        }
        int maxi=-1;
        for(auto it :arr)
        {
            if(it==f[it]) maxi=max(maxi,it);
        }
        return maxi;
    }
};