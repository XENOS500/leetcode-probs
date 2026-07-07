class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string ans="";
        string str=to_string(n);
        long long sum=0;
        for(auto it:str)
        {   
            if(it!='0') {ans+=it; sum+= (it-'0');}
        }
        long long fans=stoll(ans);
        return fans*sum;
    }
};