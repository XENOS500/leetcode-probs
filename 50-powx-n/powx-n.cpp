class Solution {
public:
   double myPow(double x, int n) {
        long N = n;
        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        if(N==0) return 1;
        double temp= myPow(x,N/2);
        double res=temp*temp;
        if(N%2==1) res*=x;
        return res;
    }
};