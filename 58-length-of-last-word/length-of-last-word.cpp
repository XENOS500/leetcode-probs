class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1,cnt=0;
        while(i!=-1)
        {
            while(s[i]==' '&&cnt==0) {
                i--;continue;
            }
            if(s[i]==' '&&cnt!=0)
                break;

            cnt++;i--;
        }
        return cnt;
    }
};