class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minP = INT_MAX;
        
        for(int i =0; i<prices.size(); i++){
            if(minP > prices[i]){
                minP = prices[i];
            }else if(prices[i]-minP > maxP){
                maxP = prices[i] - minP;
            }
        }
        return maxP;
    }
};