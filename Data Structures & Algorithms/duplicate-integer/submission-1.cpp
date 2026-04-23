class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

         map<int,int>mp;
         for(int t = 0;t<nums.size();t++){
            if(!mp[nums[t]]){
            mp[nums[t]]++;}
            else{
                return true;
            }
            
         }
         return false;
    }
};
