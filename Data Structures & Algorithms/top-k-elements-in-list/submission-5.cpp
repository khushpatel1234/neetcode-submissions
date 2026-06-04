class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int>final;
        for(int t = 0;t<nums.size();t++){
            mp[nums[t]]+=1;
        }
        vector<vector<int>>ans(nums.size()+1);
        for(auto &s:mp){
            ans[s.second].push_back(s.first);
        }

        for(int t = ans.size()-1;t>=0;t--){
            if(k==0){
                return final;
            }
            int temp = 0;

            while(temp<ans[t].size() && k--){
                final.push_back(ans[t][temp]);
                temp+=1;
            }
        }
        return final;

        

    }
};
