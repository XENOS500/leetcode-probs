class Solution {
public:
    static bool myComp(vector<int> &first,vector<int> &second){
        return first[1]<second[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;
        sort(intervals.begin(),intervals.end(),myComp);
        int lastend=intervals[0][1];
        int cnt=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<lastend){
                
                cnt++;
            }
            else {
                lastend=intervals[i][1];
            }
        }
        return cnt;
    }
};