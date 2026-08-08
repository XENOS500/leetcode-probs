class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ans="";

        for(int i=0;i<n;i++)
        {
            if((s[i]<='Z'&&s[i]>='A')||(s[i]<='z'&&s[i]>='a')||(s[i]>='0'&&s[i]<='9'))
                {
                    if((s[i]<='Z'&&s[i]>='A')) ans+=tolower(s[i]);
                    else ans+=s[i];
                }
        }
        int m=ans.size();
            int i=0,j=m-1;
            for( i=0;i<=m/2-1;i++,j--)
            {
                if(ans[i]!=ans[j]) return false;
            }
        return true;
    }
};