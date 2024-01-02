class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = prices[0];
        for(int& price: prices){

            if(price < min){
                min = price;
            }
            if(profit < price-min)
                profit = price-min;
        }
        return profit;
    }

    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int max = prices[0];
        int min = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > max){
                max = prices[i];
            }
            else if(prices[i] < min){
                min = prices[i];
                max = min;
            }
            if(max-min > profit)
                profit = max-min;
        }
        return profit;
    }
};