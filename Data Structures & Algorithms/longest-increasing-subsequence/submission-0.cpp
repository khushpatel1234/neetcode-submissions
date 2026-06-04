class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>memo(nums.size()+1,vector<int>(2002,-1));
        return dp(nums,0,-1001,memo);
    }
    int dp(vector<int>&nums,int i, int prev,  vector<vector<int>>&memo){
        if(i==nums.size()){
            return 0;
        }
        if(memo[i][prev+1001]!= -1){
            return memo[i][prev+1001];
        }
        int take = INT_MIN;
        int leave = INT_MIN;
        if(nums[i]>prev){
         take = dp(nums,i+1,nums[i],memo) + 1;
        }
        leave = dp(nums,i+1,prev,memo);
        return memo[i][prev+1001] = max(take,leave);
    }
};
