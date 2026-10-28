class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            int asc = s[i];
            if(asc>=65&&asc<=90) s[i]= s[i]+32;
        }
        return s;
    }
};