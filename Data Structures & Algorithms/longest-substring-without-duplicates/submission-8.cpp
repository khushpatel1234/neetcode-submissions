class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_map<char,int>mp;
        int size = 0;
        int t;
        for( t = 0;t<s.size();t++){
            if(mp.find(s[t])==mp.end()){
               mp[s[t]] = t;
               size = max(t-left+1,size);
            }
            else{
                size = max(t-left,size);
                left = max(left,mp[s[t]]+1);
                mp[s[t]] = t;
            }
        }
        
        return size;
    }
};
