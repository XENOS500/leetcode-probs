class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> vec=arr;
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        unordered_map<int,int> pos;
        for(int i=0;i<arr.size();i++){
            pos[arr[i]]=i+1;
        }
        for(int i=0;i<vec.size();i++){
            if(pos.find(vec[i])!=pos.end()) vec[i]=pos[vec[i]];
        }
    return vec;
    }
};