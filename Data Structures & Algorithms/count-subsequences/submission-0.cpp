class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<int>>memo(s.size(),vector<int>(t.size(),-1));
      return solve(s,t,memo,0,0);
    }
    int solve(string s, string t,  vector<vector<int>>&memo, int i1, int i2 ){
        if(i2 == t.size()){
            return 1;
        }
        if(i1==s.size()){
            return 0;
        }
        if(memo[i1][i2]!=-1){
            return memo[i1][i2];
        }
        if(s[i1]==t[i2]){
            return memo[i1][i2] = solve(s,t,memo,i1+1,i2+1) + solve(s,t,memo,i1+1,i2);
        }
        else{
            return memo[i1][i2] = solve(s,t,memo,i1+1,i2);
        }
    }
};
