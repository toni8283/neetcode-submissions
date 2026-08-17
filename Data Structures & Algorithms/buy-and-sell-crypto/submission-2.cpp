class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int min_stock = prices[0];
        int profit_temp = 0;
        int max_profit = 0;
        for (int i = 0; i < n; i++) {
            if (min_stock > prices[i]) {
                min_stock = prices[i];
            }

            profit_temp = prices[i] - min_stock;
            if (profit_temp > max_profit) {
                max_profit = profit_temp;

            }
        }
        return max_profit;

        
    }
};
