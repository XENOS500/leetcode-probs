class Solution {
public:
    string smallestPalindrome(string s) {
        string left="",center="",ans="";
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            left+=s[i];
        }
        sort(left.begin(),left.end());
        if(n%2==1) center+=s[n/2];
        ans = left+ center;
        reverse(left.begin(),left.end());
        ans+=left;
        return ans;
    }
};