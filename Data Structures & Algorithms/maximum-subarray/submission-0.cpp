class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int curr = 0;
        int left = 0;
        for(int t = 0;t<nums.size();t++){
            if(t==0 || curr+nums[t]>=0){
                if(curr+nums[t]>nums[t]){
                    curr+=nums[t];
                }
                else{
                    curr = nums[t];
                }
                ans = max(ans,curr);
            }
            else{
                ans = max(ans,max(curr,nums[t]));
                curr = nums[t];
                
            }
        }
        return ans;
    }
};
