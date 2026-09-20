class Solution {
public:
    int reverseDegree(string s) {
        int sum=0,ind=1;
        for(auto it :s)
        {
            sum+=(ind*(1+'z'-it));
            ind++;
        }
        return sum;
    }
};