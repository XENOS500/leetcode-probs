class Solution {
public:
    typedef pair<int,int> p;
    struct compare{
        bool operator()( const p &p1,const p & p2){
            return p1.second < p2.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<p,vector<p> ,compare>pq;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto &it:mp){
            pq.push({it.first,it.second});
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;

    }
};