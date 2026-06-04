class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size());
        left[0] = 1;
        for(int t = 1;t<nums.size();t++){
            left[t] = left[t-1]*nums[t-1];
        }
        int right = 1;
        vector<int>final(nums.size());
        for(int t = nums.size()-1;t>=0;t--){
            final[t] = right*left[t];
            right*=nums[t];
        }
        return final;

    }
};
