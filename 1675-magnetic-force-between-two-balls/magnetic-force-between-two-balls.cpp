class Solution {
public:
    bool possible(vector<int>& position, int m,int dis)
    {
        int prev=position[0];
        m--;
        for(int i=1;i<position.size();i++)
        {
            if(position[i]-prev>=dis)
            {   
               m--;
               prev=position[i]; 
               if(m==0)return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int low=1;int n=position.size();
        sort(position.begin(),position.end());
        int high=position[n-1]-position[0];
        int ans=1;
        while(low<=high)
        {   int mid=low+(high-low)/2;
            
            if(possible(position,m,mid))
            {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
      return ans;  
    }
};