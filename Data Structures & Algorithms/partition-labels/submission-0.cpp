class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        for(int t = 0;t<s.size();t++){
            mp[s[t]] = t;
        }
        vector<int>ans;
        int left = 0;
        int right = 0;

        for(int t = 0;t<s.size();t++){
            if(t == 0){
                right = mp[s[t]];

            }
            else if(right<t){
                ans.push_back(right-left+1);
                right = max(mp[s[t]],right);
                left = t;
            }
            else{
                right = max(right,mp[s[t]]);
            }

        }
    
            ans.push_back(right-left+1);
     
        return ans;
    }
};
