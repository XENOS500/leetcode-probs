class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int maxi=0;
        int n=arr.size();
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
                int cnt=findLen(i,arr);
                maxi=max(cnt,maxi);
            }
        }
        return maxi;
    }
    int findLen(int ind,vector<int>arr)
    {   int n=arr.size();
        int cnt=1,l=ind-1,r=ind+1;
        while(l-1>=0&&arr[l]>arr[l-1])
        {
            cnt++;l--;
        }
        cnt++;
        while(r+1<n&&arr[r]>arr[r+1])
        {
            cnt++;r++;
        }
        cnt++;
        return cnt;
    }
};