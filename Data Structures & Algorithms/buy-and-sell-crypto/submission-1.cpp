class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
  int buy = 0;
  int sell = 1;
  int max_profit = prices[sell] - prices[buy];

  while (sell < prices.size()) {

    if ((prices[sell] - prices[buy]) < 0) {
      buy = sell;
    } else if ((prices[sell] - prices[buy]) > max_profit) {
      max_profit = prices[sell] - prices[buy];
    } 
    sell++;
  }

  if (max_profit < 0) {
    max_profit = 0;
  }
  return max_profit;
    }
};
