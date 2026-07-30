class Solution {
public:
    int minimumPushes(string word) {
        int len=word.size();
        int div=len/8,sum=0,cnt=1;
        while(div+1!=cnt)
        {
            sum+=cnt*8;cnt++;
        }
        sum+=(len-div*8)*(div+1);
        return sum;

    }
};