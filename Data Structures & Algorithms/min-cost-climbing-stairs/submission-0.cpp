class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int ans1 = INT_MAX;
        int ans2= INT_MAX;
        int temp = 0;
        int step = 0;
        dfs(cost,step,ans1, temp);
        dfs(cost,1,ans2,temp);

        return min(ans1,ans2);

    }
    int dfs(vector<int>cost,int step, int &ans,int temp){
        if(step>=cost.size()){
            ans = min(ans,temp);
            return 0;
        }
        temp+=cost[step];
        return dfs(cost,step+1,ans,temp) + dfs(cost,step+2,ans,temp);
    }
};
