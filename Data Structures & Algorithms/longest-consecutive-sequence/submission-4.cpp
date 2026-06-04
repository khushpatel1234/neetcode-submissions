class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int t = 0;t<nums.size();t++){
            mp[nums[t]]+=1;
        }
        int ans = 0;
        for(auto &s:mp){
            if(mp.find(s.first+1)==mp.end()){
                int temp = s.first;
                int temp1 = 0;
                while(mp.find(temp) != mp.end()){
                    temp-=1;
                    temp1+=1;
                }
                ans = max(ans,temp1);
            }
        }
        return ans;
    }
};
