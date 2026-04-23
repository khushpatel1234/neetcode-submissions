class Solution {
public:
int ans = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         for(int t = 0;t<grid.size();t++){
            for(int e = 0;e<grid[0].size();e++){
                if(grid[t][e]==2||grid[t][e]==0){
                    continue;
                }
                int check = 0;
                dfs(grid,t,e,check);
                ans= max(ans,check);
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>&grid,int r,int c,int &check){
        if(c>=grid[0].size()||r>=grid.size()||r<0||c<0||grid[r][c]==2||grid[r][c]==0){
            return;
        }
       
        else{
            check +=1;
            grid[r][c] = 2;
            dfs(grid,r+1,c,check);
            dfs(grid,r,c+1,check);
            dfs(grid,r-1,c,check);
            dfs(grid,r,c-1,check);
        }

    }
};
