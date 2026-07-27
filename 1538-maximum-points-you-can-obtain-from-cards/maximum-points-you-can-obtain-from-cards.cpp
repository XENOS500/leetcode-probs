class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=0,maxi=0;
        for( r=0;r<k;r++)
        {
            maxi+=cardPoints[r];
        }
        r--;
        int rr=cardPoints.size(),currSum=maxi;
        while(k)
        {
            currSum-=cardPoints[r];r--;
            rr--;k--;
            currSum+=cardPoints[rr];
            maxi=max(maxi,currSum);
        }
        return maxi;
    }
};