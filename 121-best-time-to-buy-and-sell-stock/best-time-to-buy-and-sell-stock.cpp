class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Tracks the lowest price seen so far
        int maxProfit = 0;      // Tracks the best profit found
        
        for (int price : prices) {
            // Update minPrice if we find a lower buying price
            if (price < minPrice) {
                minPrice = price;
            } 
            // Otherwise, check if selling today gives a better profit
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }
        
        return maxProfit;
    }

};