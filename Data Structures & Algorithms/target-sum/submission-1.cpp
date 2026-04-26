class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0;
        vector<unordered_map<int,int>>memo(nums.size());
        solve(nums,target,0,ans,0,memo);
        return ans;
    }

    void solve(vector<int>&nums, int target, int curr, int &ans, int i,vector<unordered_map<int,int>>&memo){
        if(i==nums.size()){
            if(curr == target){
            ans+=1;}
            return;
        }
        if(memo[i][curr]){
            ans+=memo[i][curr];
            return;
        }
        int before = ans;
        solve(nums,target,curr+nums[i],ans,i+1,memo);
        solve(nums,target,curr-nums[i],ans,i+1,memo);
        memo[i][curr] = ans-before;
    }
};
