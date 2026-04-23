class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& rooms) {
        int m = rooms.size(), n = rooms[0].size();

        // Start DFS from each gate
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (rooms[r][c] == 0) {
                    dfs(rooms, r, c, 0);
                }
            }
        }
    }

    void dfs(vector<vector<int>>& rooms, int r, int c, int dist) {
        int m = rooms.size(), n = rooms[0].size();

        // Boundary check
        if (r < 0 || c < 0 || r >= m || c >= n) return;

        // If current distance is not better, stop
        if (rooms[r][c] < dist) return;

        // Update distance
        rooms[r][c] = dist;

        // Recurse in 4 directions
        dfs(rooms, r+1, c, dist+1);
        dfs(rooms, r-1, c, dist+1);
        dfs(rooms, r, c+1, dist+1);
        dfs(rooms, r, c-1, dist+1);
    }
};
