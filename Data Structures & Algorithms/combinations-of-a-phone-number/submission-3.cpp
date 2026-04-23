class Solution {
public:
    vector<string> letterCombinations(string digits) {
         vector<string> temp = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "qprs", "tuv", "wxyz"
        };
        if(digits.size()==0){
            return {};
        }
        vector<string> check;
        for(int t = 0;t<digits.size();t++){
            check.push_back(temp[digits[t]-'0']);
            
        }
       
        string s = "";
        vector<string>ans;
        dfs(ans,check,s,0);
        return ans;
    }
    void dfs(vector<string>&ans,vector<string>check,string &s,int i){
        if(s.size()==check.size()){
            ans.push_back(s);
            return;
        }
        if(i>=check.size()){
            return;
        }
        for(int t = 0;t<check[i].size();t++){
            s.push_back(check[i][t]);
            dfs(ans,check,s,i+1);
            s.pop_back();
       
        }
        


    }
};
