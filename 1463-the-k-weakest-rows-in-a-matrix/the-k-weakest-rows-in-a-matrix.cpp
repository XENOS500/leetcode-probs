class Solution {
public:
    typedef pair<int,int> p;
    struct compare{
        bool operator()(const p &p1,const p &p2){
            if(p1.second==p2.second){
                 return p1.first < p2.first;
                 }//this line
            return p1.second< p2.second;
        }
    };
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(),n=mat[0].size();
        priority_queue<p,vector<p>,compare>pq;
        for(int i=0;i<m;i++){
            int soliders=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1) soliders++;
                else break;
            }
            pq.push({i,soliders});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        reverse(ans.begin(),ans.end()); //this line
        return ans;
    }
};