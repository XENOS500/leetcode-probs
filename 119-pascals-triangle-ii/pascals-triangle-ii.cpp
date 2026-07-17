class Solution {
public:
    vector<int> getRow(int rowIndex) {
          vector<vector<int>> ans(34);
        for(int i=0;i<34;i++)
        {   ans[i].resize(i + 1);
            for(int j=0;j<=i;j++)
            {
                if(j==0) ans[i][0]=1;
                else if(j==i) ans[i][i]=1;
                else 
                {
                    ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                }
            }
        }
        return ans[rowIndex];
    }
};