class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> mp;
        for(int i=0;i<order.size();i++)  mp[order[i]]=i;
        vector<pair<int,int>> dummy(friends.size(),{0,0});
        for(int i=0;i<friends.size();i++)
        {
            dummy[i]={friends[i],mp[friends[i]]};
        }
        sort(dummy.begin(), dummy.end(), cmp);
        vector<int>ans;
        for(int i=0;i<dummy.size();i++)
        {
            ans.push_back(dummy[i].first);
        }
        return ans;
    }
};