class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(auto str:sentences)
        {   int spaces=1;
            for(int i=0;i<str.size();i++)
            {   
                if(str[i]==' ') spaces++;
                maxi=max(maxi,spaces);
            }
        }
        return maxi;
    }
};