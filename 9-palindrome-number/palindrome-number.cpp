class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        string nui="";
        for(int i =str.size()-1;i>=0;i--)
        {
                nui+=str[i];
        }
        return (nui==str);
    }
};