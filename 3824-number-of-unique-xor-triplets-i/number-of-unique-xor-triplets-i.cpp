class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        if(n==2) return 2;
        int cnt=0;
        while(n)
        {
            n=n>>1;
            cnt++;
        }
        return pow(2,cnt);
    }
};