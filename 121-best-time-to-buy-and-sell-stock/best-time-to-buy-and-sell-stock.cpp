class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int min = INT_MAX;
        for(int i =0; i < prices.size(); i++)
        {
            if(prices[i] < min) min = prices[i];
            diff = max(prices[i] - min, diff);
        }
        return diff;
    }
};