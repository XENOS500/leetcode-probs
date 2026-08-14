class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0,maxLength=0;
        int charhash[26]={0};
        for(int right=0;right<s.size();right++)
        {
            charhash[s[right]-'a']++;
            while(charhash[s[right]-'a']>2)
            {
                charhash[s[left]-'a']--;
                left++;
            }
            maxLength=max(maxLength,right-left+1);

        }
        return maxLength;

    }
};