class Solution {
public:
    int firstUniqChar(string s) {
       
        for(int i=0;i<s.size();i++)
        {    int flag=0;
            for(int j=0;j<s.size();j++)
            {   if(i==j) continue;
                if(s[i]==s[j])
                {   flag=1;
                    break;
                } 
                
            }
            if(flag==0) return i;
        }
        return -1;
    }
};