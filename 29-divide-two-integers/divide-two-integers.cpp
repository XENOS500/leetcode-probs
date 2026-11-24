class Solution {
public:
    int divide(int dividend, int divisor) {
        bool negative = (dividend < 0) ^ (divisor < 0); //xor operator
        long long dividendAbs = llabs((long long)dividend);
        long long divisorAbs = llabs((long long)divisor);
        long long quotient = 0;
        for (int shift = 31; shift >= 0; shift--) {
            long long chunk = divisorAbs << shift;
            if (chunk <= dividendAbs) {
                dividendAbs -= chunk;
                quotient += (1LL << shift);
            }
        }
        long long result = negative ? -quotient : quotient;
        if (result > INT_MAX) {
            return INT_MAX;
        }
        if (result < INT_MIN) {
            return INT_MIN;
        }
        return (int)result;
    }
};