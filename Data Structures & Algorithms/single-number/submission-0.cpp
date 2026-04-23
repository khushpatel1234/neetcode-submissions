class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int t = 1;t<nums.size();t++){
            ans^=nums[t];
        }
        return ans;
    }
};
