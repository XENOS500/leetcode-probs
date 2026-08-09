class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        char target =x;
        vector<int> ans;
        for(int i=0;i<words.size();i++)
        {   size_t pos=words[i].find(target);
            if(pos!=string::npos) ans.push_back(i);
        }
        return ans;
    }
};