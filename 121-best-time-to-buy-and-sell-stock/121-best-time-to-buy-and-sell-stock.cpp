class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int smallestValue {prices[0]};
        int profitIfSold {0};
        int maxProfit {0};
        
        for (int i = 0; i < prices.size(); ++i)
        {
            if (prices[i] < smallestValue) 
            {
                smallestValue = prices[i];
                continue;
            }
            
            profitIfSold = prices[i] - smallestValue;
            if (profitIfSold > maxProfit) maxProfit = profitIfSold;
        }
        
        return maxProfit;
    }
};