class Solution {
public:
    string largestOddNumber(string num) {
        int odi=-1;
        for(int i=0;i<num.size();i++)
        {
            if((num[i]-'0')%2==1) odi=i+1;
        }
        if(odi==-1) return "";
        string ans="";
        for(int i=0;i<odi;i++)
        {
            if(num[0]==0) continue;
            ans+=num[i];
        }
        return ans;
    }
};