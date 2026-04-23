class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int t = 0;t<nums.size();t++){
            if(t==0 || nums[t-1]!=nums[t]){
                twosum(nums,ans,t);
            }
        }
        return ans;
    }

    void twosum(vector<int>nums, vector<vector<int>>&ans,int start){
        
        
        for(int t = start+1;t<nums.size();t++){
            int target = -nums[start]-nums[t];
            for(int j = t+1;j<nums.size();j++){
                if(nums[j]==target){
                    ans.push_back({nums[start],nums[t],nums[j]});
                    break;
                }
            }
            while(t<nums.size()&&nums[t]==nums[t+1]){
                t++;
            }
        }
    }
};
