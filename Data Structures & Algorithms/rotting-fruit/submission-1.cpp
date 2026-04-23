class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>>v;
        queue<pair<int,int>>q;
        int ans = 0;
        int count = 0;
        int p = 0;
        for(int t = 0;t<grid.size();t++){
            for(int k = 0;k<grid[0].size();k++){
                if(grid[t][k]==2){
                    q.push(make_pair(t,k));
                }
                if(grid[t][k]==1){
                    count+=1;
                }
            }
        }
        vector<pair<int,int>>directions = {{1,0},{0,1},{-1,0},{0,-1}};
        bfs(q,directions,grid,ans,0,0,p);
        if(count == 0){
            return 0;
        }        if(p!=count){
            return -1;
        }
        ans-=1;
 return ans;
    }
    void bfs(queue<pair<int,int>>&q,vector<pair<int,int>>directions,vector<vector<int>>&grid,int &ans,int r,int c,int &p){
        
        while(!q.empty()){
            int size = q.size();
            
            for(int k = 0;k<size;k++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int i = 0;i<4;i++){
                int r = row + directions[i].first;
                int c = col + directions[i].second;
                if(r<0||c<0||r>=grid.size()||c>=grid[0].size()){
                    continue;
                }
                if(grid[r][c]==1){
                    grid[r][c] = 2;
                    p+=1;
                    q.push(make_pair(r,c));
                }
            }
                
            }
            ans+=1;

        }
    }
};
