class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int right = 1;
        vector<int>pref;
        int left = 1;
        vector<int>ans(nums.size(),0);
        for(int t = 0;t<nums.size();t++){
            left*=nums[t];
            pref.push_back(left);
   
        }
        for(int t = nums.size()-1;t>=0;t--){
            if(t==0){
                ans[0] = right;
                return ans;
            }
            ans[t] = pref[t-1]*right;
            right*=nums[t];
        }
 
        return ans;
    }
};
