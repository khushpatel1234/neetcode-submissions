class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>v(text1.size(),vector<int>(text2.size(),-1));
        return solve(text1,text2,text1.size()-1,text2.size()-1,v);
    }
    int solve(string &text1, string &text2,int i,int j,vector<vector<int>>&v){
        if(i<0||j<0){
            return 0;
        }
        if(v[i][j]!=-1){
            return v[i][j];
        }
        if(text1[i]==text2[j]){
            return v[i][j] = solve(text1,text2,i-1,j-1,v) + 1;
        }
        else{
           return v[i][j] = max(solve(text1,text2,i-1,j,v) , solve(text1,text2,i,j-1,v));
        }
        return 0;

    }
};
