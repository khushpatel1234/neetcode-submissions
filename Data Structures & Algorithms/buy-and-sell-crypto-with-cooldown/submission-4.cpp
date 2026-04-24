class Solution {
public:
    vector<vector<int>> memo;

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        memo.assign(n, vector<int>(2, -1));
        return solve(prices, 0, 1);
    }

    int solve(vector<int>& p, int i, int canBuy) {
        if (i >= p.size()) return 0;

        if (memo[i][canBuy] != -1) return memo[i][canBuy];

        int ans = 0;

        if (canBuy) {
            int buy = -p[i] + solve(p, i + 1, 0);
            int skip = solve(p, i + 1, 1);
            ans = max(buy, skip);
        } else {
            // SELL + COOLDOWN SKIP (i + 2 instead of i + 1)
            int sell = p[i] + solve(p, i + 2, 1);
            int skip = solve(p, i + 1, 0);
            ans = max(sell, skip);
        }

        return memo[i][canBuy] = ans;
    }
};