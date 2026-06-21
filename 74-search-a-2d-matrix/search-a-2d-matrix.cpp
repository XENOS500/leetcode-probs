class Solution {
public:
    int upperBound(vector<int> arr, int n, int x) {
        int low = 0;           
        int high = n - 1;      
        int ans = -1;           
        while (low <= high) {
            int mid = (low + high) / 2;  // Middle index

            if (arr[mid] <= x) {
                ans = mid;           // Store possible answer
                low = mid + 1;    
            } else {
                 high = mid - 1;               }
        }
        return ans;  
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size(),n=matrix[0].size();
    vector<int> firstcol;
    for(int i=0;i<m;i++) firstcol.push_back(matrix[i][0]);
    int row=upperBound(firstcol,firstcol.size(),target);
    int low=0,high=n-1;
    if(row==-1) return false;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(matrix[row][mid]==target)    return true;
        else if(matrix[row][mid]<target) low=mid+1;
        else high=mid-1;
    }
    return false;
    }
};