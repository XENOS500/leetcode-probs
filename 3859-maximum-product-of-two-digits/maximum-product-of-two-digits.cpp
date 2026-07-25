class Solution {
public:
    int maxProduct(int n) {
        int maxi=0,smaxi=0,cnt=0;
        while(n)
        {
            int rem=n%10;
            if(cnt==0) maxi=max(maxi,rem);
            else 
            {
                if(rem>=maxi)
                {
                    smaxi=maxi;
                    maxi=rem;
                }
                else smaxi=max(smaxi,rem);
            }
           cnt++;n/=10;
        }
        return smaxi*maxi;
    }
};