class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int left = prices[0];
        int curr = 0;

        for(int t = 1;t<prices.size();t++){
            if(left>prices[t]){
                left = prices[t];
            }
            else{
                curr = max(curr,prices[t]-left);
                
            }
        }
        return curr;
    }
};
