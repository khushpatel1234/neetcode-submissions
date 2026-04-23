class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(int t = 0;t<nums.size();t++){
            mp[nums[t]]++;
        }
        vector<pair<int,int>>v;
        for(auto &m:mp){
            v.push_back({m.second,m.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i = 0;i<k;i++){
            ans.push_back(v[i].second);
        }
       
        return ans;
    }
};
