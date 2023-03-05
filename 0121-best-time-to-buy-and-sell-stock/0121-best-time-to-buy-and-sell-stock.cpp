class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice = 0;
        int minPrice = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }else if(prices[i] - minPrice > maxPrice){
                maxPrice = prices[i] - minPrice;
            }
        }
        return maxPrice;
    }
};