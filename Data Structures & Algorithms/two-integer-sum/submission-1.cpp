class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>v;
        for(int t = 0;t<nums.size();t++){
            mp[nums[t]] = t;
        }
        for(int t =0;t<nums.size();t++){
            int req = target - nums[t];
            if(mp[req]&&t!=mp[req]){
                v.push_back(t);
                v.push_back(mp[req]);
                break;
            }
        }
        return v;
    }
};
