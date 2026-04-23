class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi = INT_MIN;
        unordered_map<int,int>mp;
        char m;
        int left = 0;
        int ans = 0;
        for(int t = 0;t<s.size();t++){
            mp[s[t]]+=1;
            maxi = max(maxi,mp[s[t]]);
            if(t-left+1-maxi>k){
                mp[s[left]]-=1;
                left+=1;
            }
            ans = max(t-left+1,ans);
        }
        return ans;
    }
};
