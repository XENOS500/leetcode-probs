class Solution {
public:
    vector<int> pse(vector<int> arr)
    {   int n=arr.size();
        stack<int>st;
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++)
        {
            if(st.empty()) {st.push(i);continue;}
            while(!st.empty()&&arr[st.top()]>=arr[i]) st.pop();
            if(!st.empty()) ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> nse(vector<int> arr)
    {   int n=arr.size();
        stack<int>st;
        vector<int> ans(n,n);
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty()) {st.push(i);continue;}
            while(!st.empty()&&arr[st.top()]>=arr[i]) st.pop();
            if(!st.empty()) ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> Pse=pse(heights),Nse=nse(heights);
        int maxi=0;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,heights[i]*(Nse[i]-Pse[i]-1));
        }
        return maxi;
    }
};