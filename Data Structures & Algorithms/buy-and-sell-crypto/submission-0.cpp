class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int buy = prices[0],sell;
        int profit;
        for(int t = 1;t<prices.size();t++){
            if(prices[t]<prices[t-1]){
                buy = min(buy,prices[t]);
            }
            else{
                sell = prices[t];
                profit = sell - buy;
                ans = max(ans,profit);
            }
        }
        return ans;
    }
};
