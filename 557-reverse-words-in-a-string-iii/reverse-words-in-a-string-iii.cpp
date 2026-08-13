class Solution {
public:
    string reverseWords(string s) {
        string word="";
        vector<string> chars;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ') word+=s[i];
            else if(s[i]==' ')
            {   reverse(word.begin(),word.end());
                chars.push_back(word);
                word="";
            }            
        }
        if (!word.empty()) {
        reverse(word.begin(), word.end());
         chars.push_back(word);
        }
        string ans="";
        for(int i=0;i<chars.size();i++)
        {
            ans+=chars[i];
            if(i!=chars.size()-1) ans+=" ";
        }
        return ans;
    }
};