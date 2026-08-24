class Solution {
public:
    int NoOfOnes(int n) {
        int count = 0; 
        while (n) {
            n &= (n - 1); 
            count++; 
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> arr;
        int i=0;
        while(i<=n)
        {
            arr.push_back(NoOfOnes(i));
            i++;
        }
        return arr;
    }
};