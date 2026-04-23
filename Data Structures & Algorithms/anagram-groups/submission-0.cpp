class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>mp;
        for(int t = 0;t<strs.size();t++){
            map<char,int>mp1;
         
            for(int y = 0;y<strs[t].size();y++){
                mp1[strs[t][y]]++;
            }
            mp[mp1].push_back(strs[t]);

        }
        vector<vector<string>>vc;
        for(auto &m : mp){
            vc.push_back(m.second);
        }
        return vc;
    }
};
