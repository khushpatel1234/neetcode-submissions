class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr = 0;
        for(int t = 0;t<nums.size();t++){
            if(t == 0){
                curr = nums[t];
            }
            else if(curr>0){
                curr-=1;
                curr = max(curr,nums[t]);
            }
            else{
                return false;
            }
        }
        return true;

    }
};
