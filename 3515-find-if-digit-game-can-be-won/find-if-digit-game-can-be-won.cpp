class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ssum=0,dsum=0;
        for(int num:nums)
        {
            if(num>=10) dsum+=num;
            else if(num<10) ssum+=num;
        }
        if(dsum==ssum) return false;
        return true;
    }
};