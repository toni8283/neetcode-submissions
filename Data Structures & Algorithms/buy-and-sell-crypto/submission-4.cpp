class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int min_stock = prices[0];
        int profit_temp = 0;
        int max_profit = 0;
        for (int i = 0; i < n; i++) {
            min_stock = min(prices[i], min_stock);
            profit_temp = prices[i] - min_stock;
            max_profit = max(profit_temp, max_profit);
        }
        return max_profit;

        
    }
};
