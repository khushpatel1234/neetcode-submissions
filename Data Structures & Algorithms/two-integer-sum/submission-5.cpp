class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int t = 0;t<nums.size();t++){
            if(mp.find(target-nums[t])!=mp.end()){
                return {mp[target - nums[t]],t};
            }
            mp[nums[t]]=t;
        }
        return {};
    }
};
