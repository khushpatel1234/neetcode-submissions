class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b;
        int ans = 0;
        for(int t = 0;t<prices.size();t++){
            if(t == 0||b>prices[t]){
                b = prices[t];
            }
            else{
                ans = max(ans,prices[t]-b);

            }
        }
        return ans;
    }
    
};
