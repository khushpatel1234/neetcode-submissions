class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m+1,vector<int>(n+1,0));
        return solve(v,m-1,n-1)+1;
    }
    int solve(vector<vector<int>>&v,int m, int n){
        if(m == 0&&n == 0){
            return v[m][n] = 0;
        }
        else if(m == 0||n==0){
            return v[m][n] =0;
        }
        else if(v[m][n]){
            return v[m][n];
        }
        return v[m][n] = solve(v,m-1,n) + solve(v,m,n-1)+1;
    }
};
