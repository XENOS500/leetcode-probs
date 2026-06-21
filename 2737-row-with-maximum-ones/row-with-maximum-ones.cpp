class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
     int m= mat.size(), n= mat[0].size(); // m is rows, n is col
    int cnt_max=0,index=0;
    for(int i=0;i<m;i++)
    {   int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1) cnt++;
        }
        if(cnt>cnt_max)
        {
            cnt_max=cnt;
            index= i;
        }
    }
    return {index,cnt_max};
    }
};