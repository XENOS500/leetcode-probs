class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(auto word:words)
        {   int sum=0;
          for(int i=0;i<word.size();i++)
          {
            sum+=weights[word[i]-'a'];
          }  
           int ind= 25-(sum%26);
           ans+=(char)('a'+ind);
        }
        return ans;
    }
};