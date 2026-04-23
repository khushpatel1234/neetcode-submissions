class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>mp;
        for(int t = 0;t<strs.size();t++){
            vector<int>count(26,0);
            for(int l = 0;l<strs[t].size();l++){
                count[strs[t][l]-'a']+=1;
            }
            string temp = "";
            for(int k = 0;k<count.size();k++){
                char l = count[k] + '0';
                temp+=l;
                temp+='#';
            }
            mp[temp].push_back(strs[t]);
        }
        for(auto &s:mp){
            vector<string>temp1;
            for(auto &k:s.second){
                temp1.push_back(k);
            }
            v.push_back(temp1);
        }
        return v;
    }
};
