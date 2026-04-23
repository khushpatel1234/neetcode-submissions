class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        int range = nums.size();
        vector<int>copy(range,0);
        for(int t = 0;t<nums.size();t++){
            if(copy[nums[t]]>0){
                ans =  nums[t];
                break;
            }
            else{
                copy[nums[t]]+=1;
            }
        }
        return ans;
    }
};
