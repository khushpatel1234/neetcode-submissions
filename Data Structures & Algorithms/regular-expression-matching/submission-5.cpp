class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int>>memo(s.size()+1,vector<int>(p.size()+1,-1));
        return solve(s, p, 0, 0,memo);
    }

    bool solve(string& s, string& p, int i, int j,vector<vector<int>>&memo) {
        if (j == p.size()) {
            return i == s.size();
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        bool firstMatch = false;
        
        if (i < s.size() && (s[i] == p[j] || p[j] == '.')) {
            firstMatch = true;
        }

        if (j + 1 < p.size() && p[j + 1] == '*') {
            return memo[i][j] = solve(s, p, i, j + 2,memo) ||
                   (firstMatch && solve(s, p, i + 1, j,memo));
        }

        return memo[i][j] = firstMatch && solve(s, p, i + 1, j + 1,memo);
    }
};