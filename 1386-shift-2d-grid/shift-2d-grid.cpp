class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j+k< n)
                {
                    int rem =(j+k)%n;
                    ans[i][rem]=grid[i][j];
                }
                else 
                {   
                    int rem=(j+k)%n;
                    int push=(j+k)/n;
                    ans[(i+push)%m][rem]=grid[i][j];
                }
            }
        }
        return ans;
    }
};