class Solution {
public:
    int ans = 0;
    
    int numIslands(vector<vector<char>>& grid) {
       
        for(int t = 0;t<grid.size();t++){
            for(int e = 0;e<grid[0].size();e++){
                if(grid[t][e]=='#'||grid[t][e]=='0'){
                    continue;
                }
                int check = 0;
                dfs(grid,t,e,ans,check);
                if(check ==1){
                    ans+=1;
                }
            }
        }
        return ans;
    }

    void dfs(vector<vector<char>>&grid,int r,int c,int &ans,int &check){
        if(c>=grid[0].size()||r>=grid.size()||r<0||c<0||grid[r][c]=='#'||grid[r][c]=='0'){
            return;
        }
       
        else{
            check =1;
             grid[r][c] = '#';
            dfs(grid,r+1,c,ans,check);
            dfs(grid,r,c+1,ans,check);
            dfs(grid,r-1,c,ans,check);
            dfs(grid,r,c-1,ans,check);
        }

    }
};
